#pragma once

#include <vector>
#include "PathAlgorithm.h"

template <class T>
class PathFinder
{
	public:

		PathFinder() :
			m_start(nullptr), m_goal(nullptr)
		{}

		void setStart(T& start)
		{
			m_start = &start;
		}

		void setGoal(T& goal)
		{
			m_goal = &goal;
		}

		T* getStart() const
		{
			return m_start;
		}

		T* getGoal() const
		{
			return m_goal;
		}

		template <class U>
		bool findPath(PathAlgorithm<U>& algorithm, std::vector<T*>& solution, int hint = 0)
		{
			std::vector<U*> path;

			bool pathFound = algorithm.getPath(m_start, m_goal, path);
			algorithm.clear();

			if(!pathFound)
				return false;

			if(hint > 0)
				solution.reserve(hint);

			for(auto rit = path.rbegin(); rit != path.rend(); ++rit)
				solution.push_back( static_cast<T*>(*rit) );

			return true;
		}

	private:
		T *m_start, *m_goal;
};
