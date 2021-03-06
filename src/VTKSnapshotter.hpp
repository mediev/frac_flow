#ifndef VTKSNAPSHOTTER_HPP_
#define VTKSNAPSHOTTER_HPP_

namespace snapshotter
{
	template<class modelType>
	class VTKSnapshotter
	{
	public:
		typedef modelType Model;
		typedef typename Model::Cell Cell;
	protected:
		const Model* model;
		const std::string prefix = "snaps/";
		std::string pattern;
		std::string replace(std::string filename, std::string from, std::string to);
		std::string getFileName(const int i);

		double R_dim, P_dim;
	public:
		VTKSnapshotter(const Model* _model);
		~VTKSnapshotter();

		void dump(const int snap_idx);

	};
};

#endif /* VTKSNAPSHOTTER_HPP_ */
