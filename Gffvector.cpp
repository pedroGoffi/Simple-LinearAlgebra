
#ifndef GOFFI_VECTOR
#define GOFFI_VECTOR
#include <ostream>
/*
*    USAGE:
*        First define the vector you want to use or #define use_all_vectors_in_gffvector once
*		---- MAX DIMENSION is 5 ----
*		 gff::vec<dimension><var type>
*		 var types options:
*			sh 	stands for short
*			shi 	stands for short int
*			ssh 	stands for signed short
*			sshi 	stands for signed short int
*			u 	stands for unsigned
*			ush 	stands for unsigned short
*			ushi 	stands for unsigned short int
*			i 	stands for int
*			s 	stands for signed
*			si 	stands for signed int
*			ui 	stands for unsigned int
*			l 	stands for long
*			li 	stands for long int
*			sl 	stands for signed long
*			sli 	stands for signed long int
*			ul 	stands for unsigned long
*			uli 	stands for unsigned long int
*			ll 	stands for long long
*			lli 	stands for long long int
*			sll 	stands for signed long long
*			slli 	stands for signed long long int
*			ull 	stands for unsigned long long
*			ulli 	stands for unsigned long long int
*			f 	stands for float
*			d 	stands for double
*			ld 	stands for long double
*		For example:
*			#define use_vec2i
*			gff::vec2i myvec{2,2}; to a vector 2 dimensional of integer
*				Support: ['+', '-', '*', '/', '+=', '-=', '*=', '/='] ['<', '>', '=='] */
namespace gff{
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2sh
	#endif
	#ifdef use_vec2sh
	struct vec2sh
	{
		short a;
		short b;
		vec2sh(short a, short b)
		{
			this->a=a;
			this->b=b;
		}
		vec2sh operator+(struct vec2sh& other)
		{
			return vec2sh(this->a+other.a, this->b+other.b);
		}
		vec2sh operator-(struct vec2sh& other)
		{
			return vec2sh(this->a-other.a, this->b-other.b);
		}
		vec2sh operator*(struct vec2sh& other)
		{
			return vec2sh(this->a*other.a, this->b*other.b);
		}
		vec2sh operator/(struct vec2sh& other)
		{
			return vec2sh(this->a/other.a, this->b/other.b);
		}
		vec2sh operator+=(struct vec2sh& other)
		{
			return vec2sh(this->a+=other.a, this->b+=other.b);
		}
		vec2sh operator-=(struct vec2sh& other)
		{
			return vec2sh(this->a-=other.a, this->b-=other.b);
		}
		vec2sh operator*=(struct vec2sh& other)
		{
			return vec2sh(this->a*=other.a, this->b*=other.b);
		}
		vec2sh operator/=(struct vec2sh& other)
		{
			return vec2sh(this->a/=other.a, this->b/=other.b);
		}
		short magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2sh const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		short dot(vec2sh other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2sh& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2sh& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2sh& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2sh */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2shi
	#endif
	#ifdef use_vec2shi
	struct vec2shi
	{
		short int a;
		short int b;
		vec2shi(short int a, short int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2shi operator+(struct vec2shi& other)
		{
			return vec2shi(this->a+other.a, this->b+other.b);
		}
		vec2shi operator-(struct vec2shi& other)
		{
			return vec2shi(this->a-other.a, this->b-other.b);
		}
		vec2shi operator*(struct vec2shi& other)
		{
			return vec2shi(this->a*other.a, this->b*other.b);
		}
		vec2shi operator/(struct vec2shi& other)
		{
			return vec2shi(this->a/other.a, this->b/other.b);
		}
		vec2shi operator+=(struct vec2shi& other)
		{
			return vec2shi(this->a+=other.a, this->b+=other.b);
		}
		vec2shi operator-=(struct vec2shi& other)
		{
			return vec2shi(this->a-=other.a, this->b-=other.b);
		}
		vec2shi operator*=(struct vec2shi& other)
		{
			return vec2shi(this->a*=other.a, this->b*=other.b);
		}
		vec2shi operator/=(struct vec2shi& other)
		{
			return vec2shi(this->a/=other.a, this->b/=other.b);
		}
		short int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2shi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		short int dot(vec2shi other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2shi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2shi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2shi& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2shi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ssh
	#endif
	#ifdef use_vec2ssh
	struct vec2ssh
	{
		signed short a;
		signed short b;
		vec2ssh(signed short a, signed short b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ssh operator+(struct vec2ssh& other)
		{
			return vec2ssh(this->a+other.a, this->b+other.b);
		}
		vec2ssh operator-(struct vec2ssh& other)
		{
			return vec2ssh(this->a-other.a, this->b-other.b);
		}
		vec2ssh operator*(struct vec2ssh& other)
		{
			return vec2ssh(this->a*other.a, this->b*other.b);
		}
		vec2ssh operator/(struct vec2ssh& other)
		{
			return vec2ssh(this->a/other.a, this->b/other.b);
		}
		vec2ssh operator+=(struct vec2ssh& other)
		{
			return vec2ssh(this->a+=other.a, this->b+=other.b);
		}
		vec2ssh operator-=(struct vec2ssh& other)
		{
			return vec2ssh(this->a-=other.a, this->b-=other.b);
		}
		vec2ssh operator*=(struct vec2ssh& other)
		{
			return vec2ssh(this->a*=other.a, this->b*=other.b);
		}
		vec2ssh operator/=(struct vec2ssh& other)
		{
			return vec2ssh(this->a/=other.a, this->b/=other.b);
		}
		signed short magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ssh const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		signed short dot(vec2ssh other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ssh& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ssh& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ssh& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ssh */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2sshi
	#endif
	#ifdef use_vec2sshi
	struct vec2sshi
	{
		signed short int a;
		signed short int b;
		vec2sshi(signed short int a, signed short int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2sshi operator+(struct vec2sshi& other)
		{
			return vec2sshi(this->a+other.a, this->b+other.b);
		}
		vec2sshi operator-(struct vec2sshi& other)
		{
			return vec2sshi(this->a-other.a, this->b-other.b);
		}
		vec2sshi operator*(struct vec2sshi& other)
		{
			return vec2sshi(this->a*other.a, this->b*other.b);
		}
		vec2sshi operator/(struct vec2sshi& other)
		{
			return vec2sshi(this->a/other.a, this->b/other.b);
		}
		vec2sshi operator+=(struct vec2sshi& other)
		{
			return vec2sshi(this->a+=other.a, this->b+=other.b);
		}
		vec2sshi operator-=(struct vec2sshi& other)
		{
			return vec2sshi(this->a-=other.a, this->b-=other.b);
		}
		vec2sshi operator*=(struct vec2sshi& other)
		{
			return vec2sshi(this->a*=other.a, this->b*=other.b);
		}
		vec2sshi operator/=(struct vec2sshi& other)
		{
			return vec2sshi(this->a/=other.a, this->b/=other.b);
		}
		signed short int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2sshi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		signed short int dot(vec2sshi other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2sshi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2sshi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2sshi& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2sshi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2u
	#endif
	#ifdef use_vec2u
	struct vec2u
	{
		unsigned a;
		unsigned b;
		vec2u(unsigned a, unsigned b)
		{
			this->a=a;
			this->b=b;
		}
		vec2u operator+(struct vec2u& other)
		{
			return vec2u(this->a+other.a, this->b+other.b);
		}
		vec2u operator-(struct vec2u& other)
		{
			return vec2u(this->a-other.a, this->b-other.b);
		}
		vec2u operator*(struct vec2u& other)
		{
			return vec2u(this->a*other.a, this->b*other.b);
		}
		vec2u operator/(struct vec2u& other)
		{
			return vec2u(this->a/other.a, this->b/other.b);
		}
		vec2u operator+=(struct vec2u& other)
		{
			return vec2u(this->a+=other.a, this->b+=other.b);
		}
		vec2u operator-=(struct vec2u& other)
		{
			return vec2u(this->a-=other.a, this->b-=other.b);
		}
		vec2u operator*=(struct vec2u& other)
		{
			return vec2u(this->a*=other.a, this->b*=other.b);
		}
		vec2u operator/=(struct vec2u& other)
		{
			return vec2u(this->a/=other.a, this->b/=other.b);
		}
		unsigned magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2u const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		unsigned dot(vec2u other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2u& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2u& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2u& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2u */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ush
	#endif
	#ifdef use_vec2ush
	struct vec2ush
	{
		unsigned short a;
		unsigned short b;
		vec2ush(unsigned short a, unsigned short b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ush operator+(struct vec2ush& other)
		{
			return vec2ush(this->a+other.a, this->b+other.b);
		}
		vec2ush operator-(struct vec2ush& other)
		{
			return vec2ush(this->a-other.a, this->b-other.b);
		}
		vec2ush operator*(struct vec2ush& other)
		{
			return vec2ush(this->a*other.a, this->b*other.b);
		}
		vec2ush operator/(struct vec2ush& other)
		{
			return vec2ush(this->a/other.a, this->b/other.b);
		}
		vec2ush operator+=(struct vec2ush& other)
		{
			return vec2ush(this->a+=other.a, this->b+=other.b);
		}
		vec2ush operator-=(struct vec2ush& other)
		{
			return vec2ush(this->a-=other.a, this->b-=other.b);
		}
		vec2ush operator*=(struct vec2ush& other)
		{
			return vec2ush(this->a*=other.a, this->b*=other.b);
		}
		vec2ush operator/=(struct vec2ush& other)
		{
			return vec2ush(this->a/=other.a, this->b/=other.b);
		}
		unsigned short magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ush const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		unsigned short dot(vec2ush other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ush& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ush& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ush& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ush */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ushi
	#endif
	#ifdef use_vec2ushi
	struct vec2ushi
	{
		unsigned short int a;
		unsigned short int b;
		vec2ushi(unsigned short int a, unsigned short int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ushi operator+(struct vec2ushi& other)
		{
			return vec2ushi(this->a+other.a, this->b+other.b);
		}
		vec2ushi operator-(struct vec2ushi& other)
		{
			return vec2ushi(this->a-other.a, this->b-other.b);
		}
		vec2ushi operator*(struct vec2ushi& other)
		{
			return vec2ushi(this->a*other.a, this->b*other.b);
		}
		vec2ushi operator/(struct vec2ushi& other)
		{
			return vec2ushi(this->a/other.a, this->b/other.b);
		}
		vec2ushi operator+=(struct vec2ushi& other)
		{
			return vec2ushi(this->a+=other.a, this->b+=other.b);
		}
		vec2ushi operator-=(struct vec2ushi& other)
		{
			return vec2ushi(this->a-=other.a, this->b-=other.b);
		}
		vec2ushi operator*=(struct vec2ushi& other)
		{
			return vec2ushi(this->a*=other.a, this->b*=other.b);
		}
		vec2ushi operator/=(struct vec2ushi& other)
		{
			return vec2ushi(this->a/=other.a, this->b/=other.b);
		}
		unsigned short int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ushi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		unsigned short int dot(vec2ushi other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ushi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ushi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ushi& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ushi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2i
	#endif
	#ifdef use_vec2i
	struct vec2i
	{
		int a;
		int b;
		vec2i(int a, int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2i operator+(struct vec2i& other)
		{
			return vec2i(this->a+other.a, this->b+other.b);
		}
		vec2i operator-(struct vec2i& other)
		{
			return vec2i(this->a-other.a, this->b-other.b);
		}
		vec2i operator*(struct vec2i& other)
		{
			return vec2i(this->a*other.a, this->b*other.b);
		}
		vec2i operator/(struct vec2i& other)
		{
			return vec2i(this->a/other.a, this->b/other.b);
		}
		vec2i operator+=(struct vec2i& other)
		{
			return vec2i(this->a+=other.a, this->b+=other.b);
		}
		vec2i operator-=(struct vec2i& other)
		{
			return vec2i(this->a-=other.a, this->b-=other.b);
		}
		vec2i operator*=(struct vec2i& other)
		{
			return vec2i(this->a*=other.a, this->b*=other.b);
		}
		vec2i operator/=(struct vec2i& other)
		{
			return vec2i(this->a/=other.a, this->b/=other.b);
		}
		int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2i const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		int dot(vec2i other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2i& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2i& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2i& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2i */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2s
	#endif
	#ifdef use_vec2s
	struct vec2s
	{
		signed a;
		signed b;
		vec2s(signed a, signed b)
		{
			this->a=a;
			this->b=b;
		}
		vec2s operator+(struct vec2s& other)
		{
			return vec2s(this->a+other.a, this->b+other.b);
		}
		vec2s operator-(struct vec2s& other)
		{
			return vec2s(this->a-other.a, this->b-other.b);
		}
		vec2s operator*(struct vec2s& other)
		{
			return vec2s(this->a*other.a, this->b*other.b);
		}
		vec2s operator/(struct vec2s& other)
		{
			return vec2s(this->a/other.a, this->b/other.b);
		}
		vec2s operator+=(struct vec2s& other)
		{
			return vec2s(this->a+=other.a, this->b+=other.b);
		}
		vec2s operator-=(struct vec2s& other)
		{
			return vec2s(this->a-=other.a, this->b-=other.b);
		}
		vec2s operator*=(struct vec2s& other)
		{
			return vec2s(this->a*=other.a, this->b*=other.b);
		}
		vec2s operator/=(struct vec2s& other)
		{
			return vec2s(this->a/=other.a, this->b/=other.b);
		}
		signed magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2s const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		signed dot(vec2s other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2s& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2s& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2s& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2s */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2si
	#endif
	#ifdef use_vec2si
	struct vec2si
	{
		signed int a;
		signed int b;
		vec2si(signed int a, signed int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2si operator+(struct vec2si& other)
		{
			return vec2si(this->a+other.a, this->b+other.b);
		}
		vec2si operator-(struct vec2si& other)
		{
			return vec2si(this->a-other.a, this->b-other.b);
		}
		vec2si operator*(struct vec2si& other)
		{
			return vec2si(this->a*other.a, this->b*other.b);
		}
		vec2si operator/(struct vec2si& other)
		{
			return vec2si(this->a/other.a, this->b/other.b);
		}
		vec2si operator+=(struct vec2si& other)
		{
			return vec2si(this->a+=other.a, this->b+=other.b);
		}
		vec2si operator-=(struct vec2si& other)
		{
			return vec2si(this->a-=other.a, this->b-=other.b);
		}
		vec2si operator*=(struct vec2si& other)
		{
			return vec2si(this->a*=other.a, this->b*=other.b);
		}
		vec2si operator/=(struct vec2si& other)
		{
			return vec2si(this->a/=other.a, this->b/=other.b);
		}
		signed int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2si const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		signed int dot(vec2si other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2si& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2si& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2si& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2si */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ui
	#endif
	#ifdef use_vec2ui
	struct vec2ui
	{
		unsigned int a;
		unsigned int b;
		vec2ui(unsigned int a, unsigned int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ui operator+(struct vec2ui& other)
		{
			return vec2ui(this->a+other.a, this->b+other.b);
		}
		vec2ui operator-(struct vec2ui& other)
		{
			return vec2ui(this->a-other.a, this->b-other.b);
		}
		vec2ui operator*(struct vec2ui& other)
		{
			return vec2ui(this->a*other.a, this->b*other.b);
		}
		vec2ui operator/(struct vec2ui& other)
		{
			return vec2ui(this->a/other.a, this->b/other.b);
		}
		vec2ui operator+=(struct vec2ui& other)
		{
			return vec2ui(this->a+=other.a, this->b+=other.b);
		}
		vec2ui operator-=(struct vec2ui& other)
		{
			return vec2ui(this->a-=other.a, this->b-=other.b);
		}
		vec2ui operator*=(struct vec2ui& other)
		{
			return vec2ui(this->a*=other.a, this->b*=other.b);
		}
		vec2ui operator/=(struct vec2ui& other)
		{
			return vec2ui(this->a/=other.a, this->b/=other.b);
		}
		unsigned int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ui const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		unsigned int dot(vec2ui other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ui& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ui& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ui& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ui */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2l
	#endif
	#ifdef use_vec2l
	struct vec2l
	{
		long a;
		long b;
		vec2l(long a, long b)
		{
			this->a=a;
			this->b=b;
		}
		vec2l operator+(struct vec2l& other)
		{
			return vec2l(this->a+other.a, this->b+other.b);
		}
		vec2l operator-(struct vec2l& other)
		{
			return vec2l(this->a-other.a, this->b-other.b);
		}
		vec2l operator*(struct vec2l& other)
		{
			return vec2l(this->a*other.a, this->b*other.b);
		}
		vec2l operator/(struct vec2l& other)
		{
			return vec2l(this->a/other.a, this->b/other.b);
		}
		vec2l operator+=(struct vec2l& other)
		{
			return vec2l(this->a+=other.a, this->b+=other.b);
		}
		vec2l operator-=(struct vec2l& other)
		{
			return vec2l(this->a-=other.a, this->b-=other.b);
		}
		vec2l operator*=(struct vec2l& other)
		{
			return vec2l(this->a*=other.a, this->b*=other.b);
		}
		vec2l operator/=(struct vec2l& other)
		{
			return vec2l(this->a/=other.a, this->b/=other.b);
		}
		long magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2l const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		long dot(vec2l other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2l& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2l& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2l& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2l */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2li
	#endif
	#ifdef use_vec2li
	struct vec2li
	{
		long int a;
		long int b;
		vec2li(long int a, long int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2li operator+(struct vec2li& other)
		{
			return vec2li(this->a+other.a, this->b+other.b);
		}
		vec2li operator-(struct vec2li& other)
		{
			return vec2li(this->a-other.a, this->b-other.b);
		}
		vec2li operator*(struct vec2li& other)
		{
			return vec2li(this->a*other.a, this->b*other.b);
		}
		vec2li operator/(struct vec2li& other)
		{
			return vec2li(this->a/other.a, this->b/other.b);
		}
		vec2li operator+=(struct vec2li& other)
		{
			return vec2li(this->a+=other.a, this->b+=other.b);
		}
		vec2li operator-=(struct vec2li& other)
		{
			return vec2li(this->a-=other.a, this->b-=other.b);
		}
		vec2li operator*=(struct vec2li& other)
		{
			return vec2li(this->a*=other.a, this->b*=other.b);
		}
		vec2li operator/=(struct vec2li& other)
		{
			return vec2li(this->a/=other.a, this->b/=other.b);
		}
		long int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2li const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		long int dot(vec2li other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2li& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2li& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2li& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2li */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2sl
	#endif
	#ifdef use_vec2sl
	struct vec2sl
	{
		signed long a;
		signed long b;
		vec2sl(signed long a, signed long b)
		{
			this->a=a;
			this->b=b;
		}
		vec2sl operator+(struct vec2sl& other)
		{
			return vec2sl(this->a+other.a, this->b+other.b);
		}
		vec2sl operator-(struct vec2sl& other)
		{
			return vec2sl(this->a-other.a, this->b-other.b);
		}
		vec2sl operator*(struct vec2sl& other)
		{
			return vec2sl(this->a*other.a, this->b*other.b);
		}
		vec2sl operator/(struct vec2sl& other)
		{
			return vec2sl(this->a/other.a, this->b/other.b);
		}
		vec2sl operator+=(struct vec2sl& other)
		{
			return vec2sl(this->a+=other.a, this->b+=other.b);
		}
		vec2sl operator-=(struct vec2sl& other)
		{
			return vec2sl(this->a-=other.a, this->b-=other.b);
		}
		vec2sl operator*=(struct vec2sl& other)
		{
			return vec2sl(this->a*=other.a, this->b*=other.b);
		}
		vec2sl operator/=(struct vec2sl& other)
		{
			return vec2sl(this->a/=other.a, this->b/=other.b);
		}
		signed long magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2sl const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		signed long dot(vec2sl other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2sl& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2sl& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2sl& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2sl */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2sli
	#endif
	#ifdef use_vec2sli
	struct vec2sli
	{
		signed long int a;
		signed long int b;
		vec2sli(signed long int a, signed long int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2sli operator+(struct vec2sli& other)
		{
			return vec2sli(this->a+other.a, this->b+other.b);
		}
		vec2sli operator-(struct vec2sli& other)
		{
			return vec2sli(this->a-other.a, this->b-other.b);
		}
		vec2sli operator*(struct vec2sli& other)
		{
			return vec2sli(this->a*other.a, this->b*other.b);
		}
		vec2sli operator/(struct vec2sli& other)
		{
			return vec2sli(this->a/other.a, this->b/other.b);
		}
		vec2sli operator+=(struct vec2sli& other)
		{
			return vec2sli(this->a+=other.a, this->b+=other.b);
		}
		vec2sli operator-=(struct vec2sli& other)
		{
			return vec2sli(this->a-=other.a, this->b-=other.b);
		}
		vec2sli operator*=(struct vec2sli& other)
		{
			return vec2sli(this->a*=other.a, this->b*=other.b);
		}
		vec2sli operator/=(struct vec2sli& other)
		{
			return vec2sli(this->a/=other.a, this->b/=other.b);
		}
		signed long int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2sli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		signed long int dot(vec2sli other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2sli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2sli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2sli& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2sli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ul
	#endif
	#ifdef use_vec2ul
	struct vec2ul
	{
		unsigned long a;
		unsigned long b;
		vec2ul(unsigned long a, unsigned long b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ul operator+(struct vec2ul& other)
		{
			return vec2ul(this->a+other.a, this->b+other.b);
		}
		vec2ul operator-(struct vec2ul& other)
		{
			return vec2ul(this->a-other.a, this->b-other.b);
		}
		vec2ul operator*(struct vec2ul& other)
		{
			return vec2ul(this->a*other.a, this->b*other.b);
		}
		vec2ul operator/(struct vec2ul& other)
		{
			return vec2ul(this->a/other.a, this->b/other.b);
		}
		vec2ul operator+=(struct vec2ul& other)
		{
			return vec2ul(this->a+=other.a, this->b+=other.b);
		}
		vec2ul operator-=(struct vec2ul& other)
		{
			return vec2ul(this->a-=other.a, this->b-=other.b);
		}
		vec2ul operator*=(struct vec2ul& other)
		{
			return vec2ul(this->a*=other.a, this->b*=other.b);
		}
		vec2ul operator/=(struct vec2ul& other)
		{
			return vec2ul(this->a/=other.a, this->b/=other.b);
		}
		unsigned long magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ul const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		unsigned long dot(vec2ul other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ul& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ul& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ul& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ul */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2uli
	#endif
	#ifdef use_vec2uli
	struct vec2uli
	{
		unsigned long int a;
		unsigned long int b;
		vec2uli(unsigned long int a, unsigned long int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2uli operator+(struct vec2uli& other)
		{
			return vec2uli(this->a+other.a, this->b+other.b);
		}
		vec2uli operator-(struct vec2uli& other)
		{
			return vec2uli(this->a-other.a, this->b-other.b);
		}
		vec2uli operator*(struct vec2uli& other)
		{
			return vec2uli(this->a*other.a, this->b*other.b);
		}
		vec2uli operator/(struct vec2uli& other)
		{
			return vec2uli(this->a/other.a, this->b/other.b);
		}
		vec2uli operator+=(struct vec2uli& other)
		{
			return vec2uli(this->a+=other.a, this->b+=other.b);
		}
		vec2uli operator-=(struct vec2uli& other)
		{
			return vec2uli(this->a-=other.a, this->b-=other.b);
		}
		vec2uli operator*=(struct vec2uli& other)
		{
			return vec2uli(this->a*=other.a, this->b*=other.b);
		}
		vec2uli operator/=(struct vec2uli& other)
		{
			return vec2uli(this->a/=other.a, this->b/=other.b);
		}
		unsigned long int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2uli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		unsigned long int dot(vec2uli other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2uli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2uli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2uli& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2uli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ll
	#endif
	#ifdef use_vec2ll
	struct vec2ll
	{
		long long a;
		long long b;
		vec2ll(long long a, long long b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ll operator+(struct vec2ll& other)
		{
			return vec2ll(this->a+other.a, this->b+other.b);
		}
		vec2ll operator-(struct vec2ll& other)
		{
			return vec2ll(this->a-other.a, this->b-other.b);
		}
		vec2ll operator*(struct vec2ll& other)
		{
			return vec2ll(this->a*other.a, this->b*other.b);
		}
		vec2ll operator/(struct vec2ll& other)
		{
			return vec2ll(this->a/other.a, this->b/other.b);
		}
		vec2ll operator+=(struct vec2ll& other)
		{
			return vec2ll(this->a+=other.a, this->b+=other.b);
		}
		vec2ll operator-=(struct vec2ll& other)
		{
			return vec2ll(this->a-=other.a, this->b-=other.b);
		}
		vec2ll operator*=(struct vec2ll& other)
		{
			return vec2ll(this->a*=other.a, this->b*=other.b);
		}
		vec2ll operator/=(struct vec2ll& other)
		{
			return vec2ll(this->a/=other.a, this->b/=other.b);
		}
		long long magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ll const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		long long dot(vec2ll other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ll& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ll& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ll& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ll */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2lli
	#endif
	#ifdef use_vec2lli
	struct vec2lli
	{
		long long int a;
		long long int b;
		vec2lli(long long int a, long long int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2lli operator+(struct vec2lli& other)
		{
			return vec2lli(this->a+other.a, this->b+other.b);
		}
		vec2lli operator-(struct vec2lli& other)
		{
			return vec2lli(this->a-other.a, this->b-other.b);
		}
		vec2lli operator*(struct vec2lli& other)
		{
			return vec2lli(this->a*other.a, this->b*other.b);
		}
		vec2lli operator/(struct vec2lli& other)
		{
			return vec2lli(this->a/other.a, this->b/other.b);
		}
		vec2lli operator+=(struct vec2lli& other)
		{
			return vec2lli(this->a+=other.a, this->b+=other.b);
		}
		vec2lli operator-=(struct vec2lli& other)
		{
			return vec2lli(this->a-=other.a, this->b-=other.b);
		}
		vec2lli operator*=(struct vec2lli& other)
		{
			return vec2lli(this->a*=other.a, this->b*=other.b);
		}
		vec2lli operator/=(struct vec2lli& other)
		{
			return vec2lli(this->a/=other.a, this->b/=other.b);
		}
		long long int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2lli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		long long int dot(vec2lli other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2lli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2lli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2lli& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2lli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2sll
	#endif
	#ifdef use_vec2sll
	struct vec2sll
	{
		signed long long a;
		signed long long b;
		vec2sll(signed long long a, signed long long b)
		{
			this->a=a;
			this->b=b;
		}
		vec2sll operator+(struct vec2sll& other)
		{
			return vec2sll(this->a+other.a, this->b+other.b);
		}
		vec2sll operator-(struct vec2sll& other)
		{
			return vec2sll(this->a-other.a, this->b-other.b);
		}
		vec2sll operator*(struct vec2sll& other)
		{
			return vec2sll(this->a*other.a, this->b*other.b);
		}
		vec2sll operator/(struct vec2sll& other)
		{
			return vec2sll(this->a/other.a, this->b/other.b);
		}
		vec2sll operator+=(struct vec2sll& other)
		{
			return vec2sll(this->a+=other.a, this->b+=other.b);
		}
		vec2sll operator-=(struct vec2sll& other)
		{
			return vec2sll(this->a-=other.a, this->b-=other.b);
		}
		vec2sll operator*=(struct vec2sll& other)
		{
			return vec2sll(this->a*=other.a, this->b*=other.b);
		}
		vec2sll operator/=(struct vec2sll& other)
		{
			return vec2sll(this->a/=other.a, this->b/=other.b);
		}
		signed long long magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2sll const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		signed long long dot(vec2sll other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2sll& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2sll& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2sll& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2sll */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2slli
	#endif
	#ifdef use_vec2slli
	struct vec2slli
	{
		signed long long int a;
		signed long long int b;
		vec2slli(signed long long int a, signed long long int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2slli operator+(struct vec2slli& other)
		{
			return vec2slli(this->a+other.a, this->b+other.b);
		}
		vec2slli operator-(struct vec2slli& other)
		{
			return vec2slli(this->a-other.a, this->b-other.b);
		}
		vec2slli operator*(struct vec2slli& other)
		{
			return vec2slli(this->a*other.a, this->b*other.b);
		}
		vec2slli operator/(struct vec2slli& other)
		{
			return vec2slli(this->a/other.a, this->b/other.b);
		}
		vec2slli operator+=(struct vec2slli& other)
		{
			return vec2slli(this->a+=other.a, this->b+=other.b);
		}
		vec2slli operator-=(struct vec2slli& other)
		{
			return vec2slli(this->a-=other.a, this->b-=other.b);
		}
		vec2slli operator*=(struct vec2slli& other)
		{
			return vec2slli(this->a*=other.a, this->b*=other.b);
		}
		vec2slli operator/=(struct vec2slli& other)
		{
			return vec2slli(this->a/=other.a, this->b/=other.b);
		}
		signed long long int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2slli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		signed long long int dot(vec2slli other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2slli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2slli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2slli& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2slli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ull
	#endif
	#ifdef use_vec2ull
	struct vec2ull
	{
		unsigned long long a;
		unsigned long long b;
		vec2ull(unsigned long long a, unsigned long long b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ull operator+(struct vec2ull& other)
		{
			return vec2ull(this->a+other.a, this->b+other.b);
		}
		vec2ull operator-(struct vec2ull& other)
		{
			return vec2ull(this->a-other.a, this->b-other.b);
		}
		vec2ull operator*(struct vec2ull& other)
		{
			return vec2ull(this->a*other.a, this->b*other.b);
		}
		vec2ull operator/(struct vec2ull& other)
		{
			return vec2ull(this->a/other.a, this->b/other.b);
		}
		vec2ull operator+=(struct vec2ull& other)
		{
			return vec2ull(this->a+=other.a, this->b+=other.b);
		}
		vec2ull operator-=(struct vec2ull& other)
		{
			return vec2ull(this->a-=other.a, this->b-=other.b);
		}
		vec2ull operator*=(struct vec2ull& other)
		{
			return vec2ull(this->a*=other.a, this->b*=other.b);
		}
		vec2ull operator/=(struct vec2ull& other)
		{
			return vec2ull(this->a/=other.a, this->b/=other.b);
		}
		unsigned long long magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ull const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		unsigned long long dot(vec2ull other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ull& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ull& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ull& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ull */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ulli
	#endif
	#ifdef use_vec2ulli
	struct vec2ulli
	{
		unsigned long long int a;
		unsigned long long int b;
		vec2ulli(unsigned long long int a, unsigned long long int b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ulli operator+(struct vec2ulli& other)
		{
			return vec2ulli(this->a+other.a, this->b+other.b);
		}
		vec2ulli operator-(struct vec2ulli& other)
		{
			return vec2ulli(this->a-other.a, this->b-other.b);
		}
		vec2ulli operator*(struct vec2ulli& other)
		{
			return vec2ulli(this->a*other.a, this->b*other.b);
		}
		vec2ulli operator/(struct vec2ulli& other)
		{
			return vec2ulli(this->a/other.a, this->b/other.b);
		}
		vec2ulli operator+=(struct vec2ulli& other)
		{
			return vec2ulli(this->a+=other.a, this->b+=other.b);
		}
		vec2ulli operator-=(struct vec2ulli& other)
		{
			return vec2ulli(this->a-=other.a, this->b-=other.b);
		}
		vec2ulli operator*=(struct vec2ulli& other)
		{
			return vec2ulli(this->a*=other.a, this->b*=other.b);
		}
		vec2ulli operator/=(struct vec2ulli& other)
		{
			return vec2ulli(this->a/=other.a, this->b/=other.b);
		}
		unsigned long long int magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ulli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		unsigned long long int dot(vec2ulli other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ulli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ulli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ulli& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ulli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2f
	#endif
	#ifdef use_vec2f
	struct vec2f
	{
		float a;
		float b;
		vec2f(float a, float b)
		{
			this->a=a;
			this->b=b;
		}
		vec2f operator+(struct vec2f& other)
		{
			return vec2f(this->a+other.a, this->b+other.b);
		}
		vec2f operator-(struct vec2f& other)
		{
			return vec2f(this->a-other.a, this->b-other.b);
		}
		vec2f operator*(struct vec2f& other)
		{
			return vec2f(this->a*other.a, this->b*other.b);
		}
		vec2f operator/(struct vec2f& other)
		{
			return vec2f(this->a/other.a, this->b/other.b);
		}
		vec2f operator+=(struct vec2f& other)
		{
			return vec2f(this->a+=other.a, this->b+=other.b);
		}
		vec2f operator-=(struct vec2f& other)
		{
			return vec2f(this->a-=other.a, this->b-=other.b);
		}
		vec2f operator*=(struct vec2f& other)
		{
			return vec2f(this->a*=other.a, this->b*=other.b);
		}
		vec2f operator/=(struct vec2f& other)
		{
			return vec2f(this->a/=other.a, this->b/=other.b);
		}
		float magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2f const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		float dot(vec2f other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2f& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2f& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2f& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2f */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2d
	#endif
	#ifdef use_vec2d
	struct vec2d
	{
		double a;
		double b;
		vec2d(double a, double b)
		{
			this->a=a;
			this->b=b;
		}
		vec2d operator+(struct vec2d& other)
		{
			return vec2d(this->a+other.a, this->b+other.b);
		}
		vec2d operator-(struct vec2d& other)
		{
			return vec2d(this->a-other.a, this->b-other.b);
		}
		vec2d operator*(struct vec2d& other)
		{
			return vec2d(this->a*other.a, this->b*other.b);
		}
		vec2d operator/(struct vec2d& other)
		{
			return vec2d(this->a/other.a, this->b/other.b);
		}
		vec2d operator+=(struct vec2d& other)
		{
			return vec2d(this->a+=other.a, this->b+=other.b);
		}
		vec2d operator-=(struct vec2d& other)
		{
			return vec2d(this->a-=other.a, this->b-=other.b);
		}
		vec2d operator*=(struct vec2d& other)
		{
			return vec2d(this->a*=other.a, this->b*=other.b);
		}
		vec2d operator/=(struct vec2d& other)
		{
			return vec2d(this->a/=other.a, this->b/=other.b);
		}
		double magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2d const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		double dot(vec2d other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2d& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2d& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2d& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2d */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec2ld
	#endif
	#ifdef use_vec2ld
	struct vec2ld
	{
		long double a;
		long double b;
		vec2ld(long double a, long double b)
		{
			this->a=a;
			this->b=b;
		}
		vec2ld operator+(struct vec2ld& other)
		{
			return vec2ld(this->a+other.a, this->b+other.b);
		}
		vec2ld operator-(struct vec2ld& other)
		{
			return vec2ld(this->a-other.a, this->b-other.b);
		}
		vec2ld operator*(struct vec2ld& other)
		{
			return vec2ld(this->a*other.a, this->b*other.b);
		}
		vec2ld operator/(struct vec2ld& other)
		{
			return vec2ld(this->a/other.a, this->b/other.b);
		}
		vec2ld operator+=(struct vec2ld& other)
		{
			return vec2ld(this->a+=other.a, this->b+=other.b);
		}
		vec2ld operator-=(struct vec2ld& other)
		{
			return vec2ld(this->a-=other.a, this->b-=other.b);
		}
		vec2ld operator*=(struct vec2ld& other)
		{
			return vec2ld(this->a*=other.a, this->b*=other.b);
		}
		vec2ld operator/=(struct vec2ld& other)
		{
			return vec2ld(this->a/=other.a, this->b/=other.b);
		}
		long double magnitude()
		{
			return this->a*this->a+this->b*this->b;
		}
		friend std::ostream& operator<<(std::ostream& os, vec2ld const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << "]";
		}
		long double dot(vec2ld other)
		{
			return this->a*other.a+this->b*other.b;
		}
		bool operator<(vec2ld& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec2ld& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec2ld& other)
		{
			return this->a==other.a&&this->b==other.b;
		}
	};
	#endif /* use_vec2ld */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3sh
	#endif
	#ifdef use_vec3sh
	struct vec3sh
	{
		short a;
		short b;
		short c;
		vec3sh(short a, short b, short c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3sh operator+(struct vec3sh& other)
		{
			return vec3sh(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3sh operator-(struct vec3sh& other)
		{
			return vec3sh(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3sh operator*(struct vec3sh& other)
		{
			return vec3sh(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3sh operator/(struct vec3sh& other)
		{
			return vec3sh(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3sh operator+=(struct vec3sh& other)
		{
			return vec3sh(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3sh operator-=(struct vec3sh& other)
		{
			return vec3sh(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3sh operator*=(struct vec3sh& other)
		{
			return vec3sh(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3sh operator/=(struct vec3sh& other)
		{
			return vec3sh(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3sh const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		short dot(vec3sh other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3sh& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3sh& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3sh& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3sh */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3shi
	#endif
	#ifdef use_vec3shi
	struct vec3shi
	{
		short int a;
		short int b;
		short int c;
		vec3shi(short int a, short int b, short int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3shi operator+(struct vec3shi& other)
		{
			return vec3shi(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3shi operator-(struct vec3shi& other)
		{
			return vec3shi(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3shi operator*(struct vec3shi& other)
		{
			return vec3shi(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3shi operator/(struct vec3shi& other)
		{
			return vec3shi(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3shi operator+=(struct vec3shi& other)
		{
			return vec3shi(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3shi operator-=(struct vec3shi& other)
		{
			return vec3shi(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3shi operator*=(struct vec3shi& other)
		{
			return vec3shi(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3shi operator/=(struct vec3shi& other)
		{
			return vec3shi(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3shi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		short int dot(vec3shi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3shi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3shi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3shi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3shi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ssh
	#endif
	#ifdef use_vec3ssh
	struct vec3ssh
	{
		signed short a;
		signed short b;
		signed short c;
		vec3ssh(signed short a, signed short b, signed short c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ssh operator+(struct vec3ssh& other)
		{
			return vec3ssh(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ssh operator-(struct vec3ssh& other)
		{
			return vec3ssh(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ssh operator*(struct vec3ssh& other)
		{
			return vec3ssh(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ssh operator/(struct vec3ssh& other)
		{
			return vec3ssh(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ssh operator+=(struct vec3ssh& other)
		{
			return vec3ssh(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ssh operator-=(struct vec3ssh& other)
		{
			return vec3ssh(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ssh operator*=(struct vec3ssh& other)
		{
			return vec3ssh(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ssh operator/=(struct vec3ssh& other)
		{
			return vec3ssh(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		signed short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ssh const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		signed short dot(vec3ssh other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ssh& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ssh& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ssh& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ssh */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3sshi
	#endif
	#ifdef use_vec3sshi
	struct vec3sshi
	{
		signed short int a;
		signed short int b;
		signed short int c;
		vec3sshi(signed short int a, signed short int b, signed short int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3sshi operator+(struct vec3sshi& other)
		{
			return vec3sshi(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3sshi operator-(struct vec3sshi& other)
		{
			return vec3sshi(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3sshi operator*(struct vec3sshi& other)
		{
			return vec3sshi(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3sshi operator/(struct vec3sshi& other)
		{
			return vec3sshi(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3sshi operator+=(struct vec3sshi& other)
		{
			return vec3sshi(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3sshi operator-=(struct vec3sshi& other)
		{
			return vec3sshi(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3sshi operator*=(struct vec3sshi& other)
		{
			return vec3sshi(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3sshi operator/=(struct vec3sshi& other)
		{
			return vec3sshi(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		signed short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3sshi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		signed short int dot(vec3sshi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3sshi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3sshi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3sshi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3sshi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3u
	#endif
	#ifdef use_vec3u
	struct vec3u
	{
		unsigned a;
		unsigned b;
		unsigned c;
		vec3u(unsigned a, unsigned b, unsigned c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3u operator+(struct vec3u& other)
		{
			return vec3u(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3u operator-(struct vec3u& other)
		{
			return vec3u(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3u operator*(struct vec3u& other)
		{
			return vec3u(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3u operator/(struct vec3u& other)
		{
			return vec3u(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3u operator+=(struct vec3u& other)
		{
			return vec3u(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3u operator-=(struct vec3u& other)
		{
			return vec3u(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3u operator*=(struct vec3u& other)
		{
			return vec3u(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3u operator/=(struct vec3u& other)
		{
			return vec3u(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		unsigned magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3u const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		unsigned dot(vec3u other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3u& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3u& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3u& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3u */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ush
	#endif
	#ifdef use_vec3ush
	struct vec3ush
	{
		unsigned short a;
		unsigned short b;
		unsigned short c;
		vec3ush(unsigned short a, unsigned short b, unsigned short c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ush operator+(struct vec3ush& other)
		{
			return vec3ush(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ush operator-(struct vec3ush& other)
		{
			return vec3ush(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ush operator*(struct vec3ush& other)
		{
			return vec3ush(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ush operator/(struct vec3ush& other)
		{
			return vec3ush(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ush operator+=(struct vec3ush& other)
		{
			return vec3ush(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ush operator-=(struct vec3ush& other)
		{
			return vec3ush(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ush operator*=(struct vec3ush& other)
		{
			return vec3ush(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ush operator/=(struct vec3ush& other)
		{
			return vec3ush(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		unsigned short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ush const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		unsigned short dot(vec3ush other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ush& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ush& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ush& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ush */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ushi
	#endif
	#ifdef use_vec3ushi
	struct vec3ushi
	{
		unsigned short int a;
		unsigned short int b;
		unsigned short int c;
		vec3ushi(unsigned short int a, unsigned short int b, unsigned short int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ushi operator+(struct vec3ushi& other)
		{
			return vec3ushi(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ushi operator-(struct vec3ushi& other)
		{
			return vec3ushi(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ushi operator*(struct vec3ushi& other)
		{
			return vec3ushi(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ushi operator/(struct vec3ushi& other)
		{
			return vec3ushi(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ushi operator+=(struct vec3ushi& other)
		{
			return vec3ushi(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ushi operator-=(struct vec3ushi& other)
		{
			return vec3ushi(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ushi operator*=(struct vec3ushi& other)
		{
			return vec3ushi(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ushi operator/=(struct vec3ushi& other)
		{
			return vec3ushi(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		unsigned short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ushi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		unsigned short int dot(vec3ushi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ushi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ushi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ushi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ushi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3i
	#endif
	#ifdef use_vec3i
	struct vec3i
	{
		int a;
		int b;
		int c;
		vec3i(int a, int b, int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3i operator+(struct vec3i& other)
		{
			return vec3i(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3i operator-(struct vec3i& other)
		{
			return vec3i(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3i operator*(struct vec3i& other)
		{
			return vec3i(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3i operator/(struct vec3i& other)
		{
			return vec3i(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3i operator+=(struct vec3i& other)
		{
			return vec3i(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3i operator-=(struct vec3i& other)
		{
			return vec3i(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3i operator*=(struct vec3i& other)
		{
			return vec3i(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3i operator/=(struct vec3i& other)
		{
			return vec3i(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3i const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		int dot(vec3i other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3i& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3i& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3i& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3i */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3s
	#endif
	#ifdef use_vec3s
	struct vec3s
	{
		signed a;
		signed b;
		signed c;
		vec3s(signed a, signed b, signed c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3s operator+(struct vec3s& other)
		{
			return vec3s(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3s operator-(struct vec3s& other)
		{
			return vec3s(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3s operator*(struct vec3s& other)
		{
			return vec3s(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3s operator/(struct vec3s& other)
		{
			return vec3s(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3s operator+=(struct vec3s& other)
		{
			return vec3s(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3s operator-=(struct vec3s& other)
		{
			return vec3s(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3s operator*=(struct vec3s& other)
		{
			return vec3s(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3s operator/=(struct vec3s& other)
		{
			return vec3s(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		signed magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3s const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		signed dot(vec3s other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3s& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3s& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3s& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3s */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3si
	#endif
	#ifdef use_vec3si
	struct vec3si
	{
		signed int a;
		signed int b;
		signed int c;
		vec3si(signed int a, signed int b, signed int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3si operator+(struct vec3si& other)
		{
			return vec3si(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3si operator-(struct vec3si& other)
		{
			return vec3si(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3si operator*(struct vec3si& other)
		{
			return vec3si(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3si operator/(struct vec3si& other)
		{
			return vec3si(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3si operator+=(struct vec3si& other)
		{
			return vec3si(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3si operator-=(struct vec3si& other)
		{
			return vec3si(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3si operator*=(struct vec3si& other)
		{
			return vec3si(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3si operator/=(struct vec3si& other)
		{
			return vec3si(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		signed int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3si const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		signed int dot(vec3si other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3si& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3si& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3si& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3si */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ui
	#endif
	#ifdef use_vec3ui
	struct vec3ui
	{
		unsigned int a;
		unsigned int b;
		unsigned int c;
		vec3ui(unsigned int a, unsigned int b, unsigned int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ui operator+(struct vec3ui& other)
		{
			return vec3ui(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ui operator-(struct vec3ui& other)
		{
			return vec3ui(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ui operator*(struct vec3ui& other)
		{
			return vec3ui(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ui operator/(struct vec3ui& other)
		{
			return vec3ui(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ui operator+=(struct vec3ui& other)
		{
			return vec3ui(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ui operator-=(struct vec3ui& other)
		{
			return vec3ui(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ui operator*=(struct vec3ui& other)
		{
			return vec3ui(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ui operator/=(struct vec3ui& other)
		{
			return vec3ui(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		unsigned int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ui const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		unsigned int dot(vec3ui other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ui& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ui& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ui& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ui */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3l
	#endif
	#ifdef use_vec3l
	struct vec3l
	{
		long a;
		long b;
		long c;
		vec3l(long a, long b, long c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3l operator+(struct vec3l& other)
		{
			return vec3l(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3l operator-(struct vec3l& other)
		{
			return vec3l(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3l operator*(struct vec3l& other)
		{
			return vec3l(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3l operator/(struct vec3l& other)
		{
			return vec3l(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3l operator+=(struct vec3l& other)
		{
			return vec3l(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3l operator-=(struct vec3l& other)
		{
			return vec3l(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3l operator*=(struct vec3l& other)
		{
			return vec3l(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3l operator/=(struct vec3l& other)
		{
			return vec3l(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3l const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		long dot(vec3l other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3l& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3l& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3l& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3l */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3li
	#endif
	#ifdef use_vec3li
	struct vec3li
	{
		long int a;
		long int b;
		long int c;
		vec3li(long int a, long int b, long int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3li operator+(struct vec3li& other)
		{
			return vec3li(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3li operator-(struct vec3li& other)
		{
			return vec3li(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3li operator*(struct vec3li& other)
		{
			return vec3li(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3li operator/(struct vec3li& other)
		{
			return vec3li(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3li operator+=(struct vec3li& other)
		{
			return vec3li(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3li operator-=(struct vec3li& other)
		{
			return vec3li(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3li operator*=(struct vec3li& other)
		{
			return vec3li(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3li operator/=(struct vec3li& other)
		{
			return vec3li(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3li const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		long int dot(vec3li other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3li& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3li& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3li& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3li */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3sl
	#endif
	#ifdef use_vec3sl
	struct vec3sl
	{
		signed long a;
		signed long b;
		signed long c;
		vec3sl(signed long a, signed long b, signed long c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3sl operator+(struct vec3sl& other)
		{
			return vec3sl(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3sl operator-(struct vec3sl& other)
		{
			return vec3sl(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3sl operator*(struct vec3sl& other)
		{
			return vec3sl(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3sl operator/(struct vec3sl& other)
		{
			return vec3sl(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3sl operator+=(struct vec3sl& other)
		{
			return vec3sl(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3sl operator-=(struct vec3sl& other)
		{
			return vec3sl(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3sl operator*=(struct vec3sl& other)
		{
			return vec3sl(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3sl operator/=(struct vec3sl& other)
		{
			return vec3sl(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		signed long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3sl const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		signed long dot(vec3sl other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3sl& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3sl& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3sl& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3sl */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3sli
	#endif
	#ifdef use_vec3sli
	struct vec3sli
	{
		signed long int a;
		signed long int b;
		signed long int c;
		vec3sli(signed long int a, signed long int b, signed long int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3sli operator+(struct vec3sli& other)
		{
			return vec3sli(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3sli operator-(struct vec3sli& other)
		{
			return vec3sli(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3sli operator*(struct vec3sli& other)
		{
			return vec3sli(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3sli operator/(struct vec3sli& other)
		{
			return vec3sli(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3sli operator+=(struct vec3sli& other)
		{
			return vec3sli(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3sli operator-=(struct vec3sli& other)
		{
			return vec3sli(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3sli operator*=(struct vec3sli& other)
		{
			return vec3sli(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3sli operator/=(struct vec3sli& other)
		{
			return vec3sli(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		signed long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3sli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		signed long int dot(vec3sli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3sli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3sli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3sli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3sli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ul
	#endif
	#ifdef use_vec3ul
	struct vec3ul
	{
		unsigned long a;
		unsigned long b;
		unsigned long c;
		vec3ul(unsigned long a, unsigned long b, unsigned long c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ul operator+(struct vec3ul& other)
		{
			return vec3ul(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ul operator-(struct vec3ul& other)
		{
			return vec3ul(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ul operator*(struct vec3ul& other)
		{
			return vec3ul(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ul operator/(struct vec3ul& other)
		{
			return vec3ul(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ul operator+=(struct vec3ul& other)
		{
			return vec3ul(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ul operator-=(struct vec3ul& other)
		{
			return vec3ul(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ul operator*=(struct vec3ul& other)
		{
			return vec3ul(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ul operator/=(struct vec3ul& other)
		{
			return vec3ul(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		unsigned long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ul const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		unsigned long dot(vec3ul other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ul& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ul& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ul& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ul */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3uli
	#endif
	#ifdef use_vec3uli
	struct vec3uli
	{
		unsigned long int a;
		unsigned long int b;
		unsigned long int c;
		vec3uli(unsigned long int a, unsigned long int b, unsigned long int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3uli operator+(struct vec3uli& other)
		{
			return vec3uli(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3uli operator-(struct vec3uli& other)
		{
			return vec3uli(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3uli operator*(struct vec3uli& other)
		{
			return vec3uli(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3uli operator/(struct vec3uli& other)
		{
			return vec3uli(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3uli operator+=(struct vec3uli& other)
		{
			return vec3uli(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3uli operator-=(struct vec3uli& other)
		{
			return vec3uli(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3uli operator*=(struct vec3uli& other)
		{
			return vec3uli(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3uli operator/=(struct vec3uli& other)
		{
			return vec3uli(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		unsigned long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3uli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		unsigned long int dot(vec3uli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3uli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3uli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3uli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3uli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ll
	#endif
	#ifdef use_vec3ll
	struct vec3ll
	{
		long long a;
		long long b;
		long long c;
		vec3ll(long long a, long long b, long long c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ll operator+(struct vec3ll& other)
		{
			return vec3ll(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ll operator-(struct vec3ll& other)
		{
			return vec3ll(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ll operator*(struct vec3ll& other)
		{
			return vec3ll(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ll operator/(struct vec3ll& other)
		{
			return vec3ll(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ll operator+=(struct vec3ll& other)
		{
			return vec3ll(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ll operator-=(struct vec3ll& other)
		{
			return vec3ll(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ll operator*=(struct vec3ll& other)
		{
			return vec3ll(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ll operator/=(struct vec3ll& other)
		{
			return vec3ll(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ll const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		long long dot(vec3ll other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ll& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ll& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ll& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ll */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3lli
	#endif
	#ifdef use_vec3lli
	struct vec3lli
	{
		long long int a;
		long long int b;
		long long int c;
		vec3lli(long long int a, long long int b, long long int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3lli operator+(struct vec3lli& other)
		{
			return vec3lli(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3lli operator-(struct vec3lli& other)
		{
			return vec3lli(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3lli operator*(struct vec3lli& other)
		{
			return vec3lli(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3lli operator/(struct vec3lli& other)
		{
			return vec3lli(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3lli operator+=(struct vec3lli& other)
		{
			return vec3lli(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3lli operator-=(struct vec3lli& other)
		{
			return vec3lli(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3lli operator*=(struct vec3lli& other)
		{
			return vec3lli(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3lli operator/=(struct vec3lli& other)
		{
			return vec3lli(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3lli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		long long int dot(vec3lli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3lli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3lli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3lli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3lli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3sll
	#endif
	#ifdef use_vec3sll
	struct vec3sll
	{
		signed long long a;
		signed long long b;
		signed long long c;
		vec3sll(signed long long a, signed long long b, signed long long c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3sll operator+(struct vec3sll& other)
		{
			return vec3sll(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3sll operator-(struct vec3sll& other)
		{
			return vec3sll(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3sll operator*(struct vec3sll& other)
		{
			return vec3sll(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3sll operator/(struct vec3sll& other)
		{
			return vec3sll(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3sll operator+=(struct vec3sll& other)
		{
			return vec3sll(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3sll operator-=(struct vec3sll& other)
		{
			return vec3sll(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3sll operator*=(struct vec3sll& other)
		{
			return vec3sll(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3sll operator/=(struct vec3sll& other)
		{
			return vec3sll(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		signed long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3sll const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		signed long long dot(vec3sll other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3sll& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3sll& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3sll& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3sll */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3slli
	#endif
	#ifdef use_vec3slli
	struct vec3slli
	{
		signed long long int a;
		signed long long int b;
		signed long long int c;
		vec3slli(signed long long int a, signed long long int b, signed long long int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3slli operator+(struct vec3slli& other)
		{
			return vec3slli(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3slli operator-(struct vec3slli& other)
		{
			return vec3slli(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3slli operator*(struct vec3slli& other)
		{
			return vec3slli(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3slli operator/(struct vec3slli& other)
		{
			return vec3slli(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3slli operator+=(struct vec3slli& other)
		{
			return vec3slli(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3slli operator-=(struct vec3slli& other)
		{
			return vec3slli(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3slli operator*=(struct vec3slli& other)
		{
			return vec3slli(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3slli operator/=(struct vec3slli& other)
		{
			return vec3slli(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		signed long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3slli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		signed long long int dot(vec3slli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3slli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3slli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3slli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3slli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ull
	#endif
	#ifdef use_vec3ull
	struct vec3ull
	{
		unsigned long long a;
		unsigned long long b;
		unsigned long long c;
		vec3ull(unsigned long long a, unsigned long long b, unsigned long long c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ull operator+(struct vec3ull& other)
		{
			return vec3ull(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ull operator-(struct vec3ull& other)
		{
			return vec3ull(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ull operator*(struct vec3ull& other)
		{
			return vec3ull(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ull operator/(struct vec3ull& other)
		{
			return vec3ull(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ull operator+=(struct vec3ull& other)
		{
			return vec3ull(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ull operator-=(struct vec3ull& other)
		{
			return vec3ull(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ull operator*=(struct vec3ull& other)
		{
			return vec3ull(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ull operator/=(struct vec3ull& other)
		{
			return vec3ull(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		unsigned long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ull const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		unsigned long long dot(vec3ull other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ull& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ull& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ull& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ull */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ulli
	#endif
	#ifdef use_vec3ulli
	struct vec3ulli
	{
		unsigned long long int a;
		unsigned long long int b;
		unsigned long long int c;
		vec3ulli(unsigned long long int a, unsigned long long int b, unsigned long long int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ulli operator+(struct vec3ulli& other)
		{
			return vec3ulli(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ulli operator-(struct vec3ulli& other)
		{
			return vec3ulli(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ulli operator*(struct vec3ulli& other)
		{
			return vec3ulli(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ulli operator/(struct vec3ulli& other)
		{
			return vec3ulli(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ulli operator+=(struct vec3ulli& other)
		{
			return vec3ulli(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ulli operator-=(struct vec3ulli& other)
		{
			return vec3ulli(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ulli operator*=(struct vec3ulli& other)
		{
			return vec3ulli(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ulli operator/=(struct vec3ulli& other)
		{
			return vec3ulli(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		unsigned long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ulli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		unsigned long long int dot(vec3ulli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ulli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ulli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ulli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ulli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3f
	#endif
	#ifdef use_vec3f
	struct vec3f
	{
		float a;
		float b;
		float c;
		vec3f(float a, float b, float c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3f operator+(struct vec3f& other)
		{
			return vec3f(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3f operator-(struct vec3f& other)
		{
			return vec3f(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3f operator*(struct vec3f& other)
		{
			return vec3f(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3f operator/(struct vec3f& other)
		{
			return vec3f(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3f operator+=(struct vec3f& other)
		{
			return vec3f(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3f operator-=(struct vec3f& other)
		{
			return vec3f(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3f operator*=(struct vec3f& other)
		{
			return vec3f(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3f operator/=(struct vec3f& other)
		{
			return vec3f(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		float magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3f const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		float dot(vec3f other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3f& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3f& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3f& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3f */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3d
	#endif
	#ifdef use_vec3d
	struct vec3d
	{
		double a;
		double b;
		double c;
		vec3d(double a, double b, double c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3d operator+(struct vec3d& other)
		{
			return vec3d(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3d operator-(struct vec3d& other)
		{
			return vec3d(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3d operator*(struct vec3d& other)
		{
			return vec3d(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3d operator/(struct vec3d& other)
		{
			return vec3d(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3d operator+=(struct vec3d& other)
		{
			return vec3d(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3d operator-=(struct vec3d& other)
		{
			return vec3d(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3d operator*=(struct vec3d& other)
		{
			return vec3d(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3d operator/=(struct vec3d& other)
		{
			return vec3d(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		double magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3d const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		double dot(vec3d other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3d& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3d& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3d& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3d */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec3ld
	#endif
	#ifdef use_vec3ld
	struct vec3ld
	{
		long double a;
		long double b;
		long double c;
		vec3ld(long double a, long double b, long double c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		vec3ld operator+(struct vec3ld& other)
		{
			return vec3ld(this->a+other.a, this->b+other.b, this->c+other.c);
		}
		vec3ld operator-(struct vec3ld& other)
		{
			return vec3ld(this->a-other.a, this->b-other.b, this->c-other.c);
		}
		vec3ld operator*(struct vec3ld& other)
		{
			return vec3ld(this->a*other.a, this->b*other.b, this->c*other.c);
		}
		vec3ld operator/(struct vec3ld& other)
		{
			return vec3ld(this->a/other.a, this->b/other.b, this->c/other.c);
		}
		vec3ld operator+=(struct vec3ld& other)
		{
			return vec3ld(this->a+=other.a, this->b+=other.b, this->c+=other.c);
		}
		vec3ld operator-=(struct vec3ld& other)
		{
			return vec3ld(this->a-=other.a, this->b-=other.b, this->c-=other.c);
		}
		vec3ld operator*=(struct vec3ld& other)
		{
			return vec3ld(this->a*=other.a, this->b*=other.b, this->c*=other.c);
		}
		vec3ld operator/=(struct vec3ld& other)
		{
			return vec3ld(this->a/=other.a, this->b/=other.b, this->c/=other.c);
		}
		long double magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c;
		}
		friend std::ostream& operator<<(std::ostream& os, vec3ld const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << "]";
		}
		long double dot(vec3ld other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c;
		}
		bool operator<(vec3ld& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec3ld& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec3ld& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c;
		}
	};
	#endif /* use_vec3ld */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4sh
	#endif
	#ifdef use_vec4sh
	struct vec4sh
	{
		short a;
		short b;
		short c;
		short d;
		vec4sh(short a, short b, short c, short d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4sh operator+(struct vec4sh& other)
		{
			return vec4sh(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4sh operator-(struct vec4sh& other)
		{
			return vec4sh(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4sh operator*(struct vec4sh& other)
		{
			return vec4sh(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4sh operator/(struct vec4sh& other)
		{
			return vec4sh(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4sh operator+=(struct vec4sh& other)
		{
			return vec4sh(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4sh operator-=(struct vec4sh& other)
		{
			return vec4sh(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4sh operator*=(struct vec4sh& other)
		{
			return vec4sh(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4sh operator/=(struct vec4sh& other)
		{
			return vec4sh(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4sh const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		short dot(vec4sh other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4sh& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4sh& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4sh& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4sh */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4shi
	#endif
	#ifdef use_vec4shi
	struct vec4shi
	{
		short int a;
		short int b;
		short int c;
		short int d;
		vec4shi(short int a, short int b, short int c, short int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4shi operator+(struct vec4shi& other)
		{
			return vec4shi(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4shi operator-(struct vec4shi& other)
		{
			return vec4shi(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4shi operator*(struct vec4shi& other)
		{
			return vec4shi(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4shi operator/(struct vec4shi& other)
		{
			return vec4shi(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4shi operator+=(struct vec4shi& other)
		{
			return vec4shi(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4shi operator-=(struct vec4shi& other)
		{
			return vec4shi(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4shi operator*=(struct vec4shi& other)
		{
			return vec4shi(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4shi operator/=(struct vec4shi& other)
		{
			return vec4shi(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4shi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		short int dot(vec4shi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4shi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4shi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4shi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4shi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ssh
	#endif
	#ifdef use_vec4ssh
	struct vec4ssh
	{
		signed short a;
		signed short b;
		signed short c;
		signed short d;
		vec4ssh(signed short a, signed short b, signed short c, signed short d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ssh operator+(struct vec4ssh& other)
		{
			return vec4ssh(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ssh operator-(struct vec4ssh& other)
		{
			return vec4ssh(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ssh operator*(struct vec4ssh& other)
		{
			return vec4ssh(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ssh operator/(struct vec4ssh& other)
		{
			return vec4ssh(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ssh operator+=(struct vec4ssh& other)
		{
			return vec4ssh(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ssh operator-=(struct vec4ssh& other)
		{
			return vec4ssh(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ssh operator*=(struct vec4ssh& other)
		{
			return vec4ssh(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ssh operator/=(struct vec4ssh& other)
		{
			return vec4ssh(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		signed short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ssh const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		signed short dot(vec4ssh other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ssh& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ssh& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ssh& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ssh */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4sshi
	#endif
	#ifdef use_vec4sshi
	struct vec4sshi
	{
		signed short int a;
		signed short int b;
		signed short int c;
		signed short int d;
		vec4sshi(signed short int a, signed short int b, signed short int c, signed short int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4sshi operator+(struct vec4sshi& other)
		{
			return vec4sshi(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4sshi operator-(struct vec4sshi& other)
		{
			return vec4sshi(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4sshi operator*(struct vec4sshi& other)
		{
			return vec4sshi(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4sshi operator/(struct vec4sshi& other)
		{
			return vec4sshi(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4sshi operator+=(struct vec4sshi& other)
		{
			return vec4sshi(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4sshi operator-=(struct vec4sshi& other)
		{
			return vec4sshi(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4sshi operator*=(struct vec4sshi& other)
		{
			return vec4sshi(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4sshi operator/=(struct vec4sshi& other)
		{
			return vec4sshi(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		signed short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4sshi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		signed short int dot(vec4sshi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4sshi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4sshi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4sshi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4sshi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4u
	#endif
	#ifdef use_vec4u
	struct vec4u
	{
		unsigned a;
		unsigned b;
		unsigned c;
		unsigned d;
		vec4u(unsigned a, unsigned b, unsigned c, unsigned d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4u operator+(struct vec4u& other)
		{
			return vec4u(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4u operator-(struct vec4u& other)
		{
			return vec4u(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4u operator*(struct vec4u& other)
		{
			return vec4u(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4u operator/(struct vec4u& other)
		{
			return vec4u(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4u operator+=(struct vec4u& other)
		{
			return vec4u(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4u operator-=(struct vec4u& other)
		{
			return vec4u(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4u operator*=(struct vec4u& other)
		{
			return vec4u(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4u operator/=(struct vec4u& other)
		{
			return vec4u(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		unsigned magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4u const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		unsigned dot(vec4u other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4u& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4u& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4u& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4u */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ush
	#endif
	#ifdef use_vec4ush
	struct vec4ush
	{
		unsigned short a;
		unsigned short b;
		unsigned short c;
		unsigned short d;
		vec4ush(unsigned short a, unsigned short b, unsigned short c, unsigned short d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ush operator+(struct vec4ush& other)
		{
			return vec4ush(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ush operator-(struct vec4ush& other)
		{
			return vec4ush(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ush operator*(struct vec4ush& other)
		{
			return vec4ush(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ush operator/(struct vec4ush& other)
		{
			return vec4ush(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ush operator+=(struct vec4ush& other)
		{
			return vec4ush(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ush operator-=(struct vec4ush& other)
		{
			return vec4ush(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ush operator*=(struct vec4ush& other)
		{
			return vec4ush(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ush operator/=(struct vec4ush& other)
		{
			return vec4ush(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		unsigned short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ush const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		unsigned short dot(vec4ush other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ush& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ush& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ush& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ush */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ushi
	#endif
	#ifdef use_vec4ushi
	struct vec4ushi
	{
		unsigned short int a;
		unsigned short int b;
		unsigned short int c;
		unsigned short int d;
		vec4ushi(unsigned short int a, unsigned short int b, unsigned short int c, unsigned short int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ushi operator+(struct vec4ushi& other)
		{
			return vec4ushi(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ushi operator-(struct vec4ushi& other)
		{
			return vec4ushi(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ushi operator*(struct vec4ushi& other)
		{
			return vec4ushi(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ushi operator/(struct vec4ushi& other)
		{
			return vec4ushi(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ushi operator+=(struct vec4ushi& other)
		{
			return vec4ushi(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ushi operator-=(struct vec4ushi& other)
		{
			return vec4ushi(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ushi operator*=(struct vec4ushi& other)
		{
			return vec4ushi(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ushi operator/=(struct vec4ushi& other)
		{
			return vec4ushi(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		unsigned short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ushi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		unsigned short int dot(vec4ushi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ushi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ushi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ushi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ushi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4i
	#endif
	#ifdef use_vec4i
	struct vec4i
	{
		int a;
		int b;
		int c;
		int d;
		vec4i(int a, int b, int c, int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4i operator+(struct vec4i& other)
		{
			return vec4i(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4i operator-(struct vec4i& other)
		{
			return vec4i(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4i operator*(struct vec4i& other)
		{
			return vec4i(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4i operator/(struct vec4i& other)
		{
			return vec4i(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4i operator+=(struct vec4i& other)
		{
			return vec4i(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4i operator-=(struct vec4i& other)
		{
			return vec4i(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4i operator*=(struct vec4i& other)
		{
			return vec4i(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4i operator/=(struct vec4i& other)
		{
			return vec4i(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4i const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		int dot(vec4i other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4i& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4i& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4i& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4i */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4s
	#endif
	#ifdef use_vec4s
	struct vec4s
	{
		signed a;
		signed b;
		signed c;
		signed d;
		vec4s(signed a, signed b, signed c, signed d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4s operator+(struct vec4s& other)
		{
			return vec4s(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4s operator-(struct vec4s& other)
		{
			return vec4s(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4s operator*(struct vec4s& other)
		{
			return vec4s(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4s operator/(struct vec4s& other)
		{
			return vec4s(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4s operator+=(struct vec4s& other)
		{
			return vec4s(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4s operator-=(struct vec4s& other)
		{
			return vec4s(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4s operator*=(struct vec4s& other)
		{
			return vec4s(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4s operator/=(struct vec4s& other)
		{
			return vec4s(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		signed magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4s const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		signed dot(vec4s other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4s& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4s& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4s& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4s */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4si
	#endif
	#ifdef use_vec4si
	struct vec4si
	{
		signed int a;
		signed int b;
		signed int c;
		signed int d;
		vec4si(signed int a, signed int b, signed int c, signed int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4si operator+(struct vec4si& other)
		{
			return vec4si(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4si operator-(struct vec4si& other)
		{
			return vec4si(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4si operator*(struct vec4si& other)
		{
			return vec4si(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4si operator/(struct vec4si& other)
		{
			return vec4si(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4si operator+=(struct vec4si& other)
		{
			return vec4si(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4si operator-=(struct vec4si& other)
		{
			return vec4si(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4si operator*=(struct vec4si& other)
		{
			return vec4si(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4si operator/=(struct vec4si& other)
		{
			return vec4si(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		signed int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4si const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		signed int dot(vec4si other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4si& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4si& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4si& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4si */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ui
	#endif
	#ifdef use_vec4ui
	struct vec4ui
	{
		unsigned int a;
		unsigned int b;
		unsigned int c;
		unsigned int d;
		vec4ui(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ui operator+(struct vec4ui& other)
		{
			return vec4ui(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ui operator-(struct vec4ui& other)
		{
			return vec4ui(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ui operator*(struct vec4ui& other)
		{
			return vec4ui(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ui operator/(struct vec4ui& other)
		{
			return vec4ui(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ui operator+=(struct vec4ui& other)
		{
			return vec4ui(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ui operator-=(struct vec4ui& other)
		{
			return vec4ui(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ui operator*=(struct vec4ui& other)
		{
			return vec4ui(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ui operator/=(struct vec4ui& other)
		{
			return vec4ui(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		unsigned int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ui const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		unsigned int dot(vec4ui other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ui& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ui& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ui& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ui */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4l
	#endif
	#ifdef use_vec4l
	struct vec4l
	{
		long a;
		long b;
		long c;
		long d;
		vec4l(long a, long b, long c, long d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4l operator+(struct vec4l& other)
		{
			return vec4l(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4l operator-(struct vec4l& other)
		{
			return vec4l(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4l operator*(struct vec4l& other)
		{
			return vec4l(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4l operator/(struct vec4l& other)
		{
			return vec4l(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4l operator+=(struct vec4l& other)
		{
			return vec4l(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4l operator-=(struct vec4l& other)
		{
			return vec4l(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4l operator*=(struct vec4l& other)
		{
			return vec4l(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4l operator/=(struct vec4l& other)
		{
			return vec4l(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4l const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		long dot(vec4l other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4l& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4l& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4l& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4l */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4li
	#endif
	#ifdef use_vec4li
	struct vec4li
	{
		long int a;
		long int b;
		long int c;
		long int d;
		vec4li(long int a, long int b, long int c, long int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4li operator+(struct vec4li& other)
		{
			return vec4li(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4li operator-(struct vec4li& other)
		{
			return vec4li(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4li operator*(struct vec4li& other)
		{
			return vec4li(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4li operator/(struct vec4li& other)
		{
			return vec4li(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4li operator+=(struct vec4li& other)
		{
			return vec4li(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4li operator-=(struct vec4li& other)
		{
			return vec4li(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4li operator*=(struct vec4li& other)
		{
			return vec4li(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4li operator/=(struct vec4li& other)
		{
			return vec4li(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4li const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		long int dot(vec4li other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4li& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4li& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4li& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4li */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4sl
	#endif
	#ifdef use_vec4sl
	struct vec4sl
	{
		signed long a;
		signed long b;
		signed long c;
		signed long d;
		vec4sl(signed long a, signed long b, signed long c, signed long d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4sl operator+(struct vec4sl& other)
		{
			return vec4sl(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4sl operator-(struct vec4sl& other)
		{
			return vec4sl(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4sl operator*(struct vec4sl& other)
		{
			return vec4sl(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4sl operator/(struct vec4sl& other)
		{
			return vec4sl(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4sl operator+=(struct vec4sl& other)
		{
			return vec4sl(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4sl operator-=(struct vec4sl& other)
		{
			return vec4sl(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4sl operator*=(struct vec4sl& other)
		{
			return vec4sl(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4sl operator/=(struct vec4sl& other)
		{
			return vec4sl(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		signed long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4sl const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		signed long dot(vec4sl other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4sl& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4sl& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4sl& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4sl */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4sli
	#endif
	#ifdef use_vec4sli
	struct vec4sli
	{
		signed long int a;
		signed long int b;
		signed long int c;
		signed long int d;
		vec4sli(signed long int a, signed long int b, signed long int c, signed long int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4sli operator+(struct vec4sli& other)
		{
			return vec4sli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4sli operator-(struct vec4sli& other)
		{
			return vec4sli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4sli operator*(struct vec4sli& other)
		{
			return vec4sli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4sli operator/(struct vec4sli& other)
		{
			return vec4sli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4sli operator+=(struct vec4sli& other)
		{
			return vec4sli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4sli operator-=(struct vec4sli& other)
		{
			return vec4sli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4sli operator*=(struct vec4sli& other)
		{
			return vec4sli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4sli operator/=(struct vec4sli& other)
		{
			return vec4sli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		signed long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4sli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		signed long int dot(vec4sli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4sli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4sli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4sli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4sli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ul
	#endif
	#ifdef use_vec4ul
	struct vec4ul
	{
		unsigned long a;
		unsigned long b;
		unsigned long c;
		unsigned long d;
		vec4ul(unsigned long a, unsigned long b, unsigned long c, unsigned long d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ul operator+(struct vec4ul& other)
		{
			return vec4ul(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ul operator-(struct vec4ul& other)
		{
			return vec4ul(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ul operator*(struct vec4ul& other)
		{
			return vec4ul(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ul operator/(struct vec4ul& other)
		{
			return vec4ul(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ul operator+=(struct vec4ul& other)
		{
			return vec4ul(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ul operator-=(struct vec4ul& other)
		{
			return vec4ul(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ul operator*=(struct vec4ul& other)
		{
			return vec4ul(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ul operator/=(struct vec4ul& other)
		{
			return vec4ul(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		unsigned long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ul const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		unsigned long dot(vec4ul other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ul& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ul& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ul& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ul */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4uli
	#endif
	#ifdef use_vec4uli
	struct vec4uli
	{
		unsigned long int a;
		unsigned long int b;
		unsigned long int c;
		unsigned long int d;
		vec4uli(unsigned long int a, unsigned long int b, unsigned long int c, unsigned long int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4uli operator+(struct vec4uli& other)
		{
			return vec4uli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4uli operator-(struct vec4uli& other)
		{
			return vec4uli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4uli operator*(struct vec4uli& other)
		{
			return vec4uli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4uli operator/(struct vec4uli& other)
		{
			return vec4uli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4uli operator+=(struct vec4uli& other)
		{
			return vec4uli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4uli operator-=(struct vec4uli& other)
		{
			return vec4uli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4uli operator*=(struct vec4uli& other)
		{
			return vec4uli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4uli operator/=(struct vec4uli& other)
		{
			return vec4uli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		unsigned long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4uli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		unsigned long int dot(vec4uli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4uli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4uli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4uli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4uli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ll
	#endif
	#ifdef use_vec4ll
	struct vec4ll
	{
		long long a;
		long long b;
		long long c;
		long long d;
		vec4ll(long long a, long long b, long long c, long long d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ll operator+(struct vec4ll& other)
		{
			return vec4ll(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ll operator-(struct vec4ll& other)
		{
			return vec4ll(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ll operator*(struct vec4ll& other)
		{
			return vec4ll(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ll operator/(struct vec4ll& other)
		{
			return vec4ll(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ll operator+=(struct vec4ll& other)
		{
			return vec4ll(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ll operator-=(struct vec4ll& other)
		{
			return vec4ll(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ll operator*=(struct vec4ll& other)
		{
			return vec4ll(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ll operator/=(struct vec4ll& other)
		{
			return vec4ll(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ll const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		long long dot(vec4ll other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ll& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ll& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ll& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ll */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4lli
	#endif
	#ifdef use_vec4lli
	struct vec4lli
	{
		long long int a;
		long long int b;
		long long int c;
		long long int d;
		vec4lli(long long int a, long long int b, long long int c, long long int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4lli operator+(struct vec4lli& other)
		{
			return vec4lli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4lli operator-(struct vec4lli& other)
		{
			return vec4lli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4lli operator*(struct vec4lli& other)
		{
			return vec4lli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4lli operator/(struct vec4lli& other)
		{
			return vec4lli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4lli operator+=(struct vec4lli& other)
		{
			return vec4lli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4lli operator-=(struct vec4lli& other)
		{
			return vec4lli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4lli operator*=(struct vec4lli& other)
		{
			return vec4lli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4lli operator/=(struct vec4lli& other)
		{
			return vec4lli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4lli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		long long int dot(vec4lli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4lli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4lli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4lli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4lli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4sll
	#endif
	#ifdef use_vec4sll
	struct vec4sll
	{
		signed long long a;
		signed long long b;
		signed long long c;
		signed long long d;
		vec4sll(signed long long a, signed long long b, signed long long c, signed long long d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4sll operator+(struct vec4sll& other)
		{
			return vec4sll(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4sll operator-(struct vec4sll& other)
		{
			return vec4sll(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4sll operator*(struct vec4sll& other)
		{
			return vec4sll(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4sll operator/(struct vec4sll& other)
		{
			return vec4sll(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4sll operator+=(struct vec4sll& other)
		{
			return vec4sll(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4sll operator-=(struct vec4sll& other)
		{
			return vec4sll(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4sll operator*=(struct vec4sll& other)
		{
			return vec4sll(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4sll operator/=(struct vec4sll& other)
		{
			return vec4sll(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		signed long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4sll const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		signed long long dot(vec4sll other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4sll& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4sll& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4sll& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4sll */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4slli
	#endif
	#ifdef use_vec4slli
	struct vec4slli
	{
		signed long long int a;
		signed long long int b;
		signed long long int c;
		signed long long int d;
		vec4slli(signed long long int a, signed long long int b, signed long long int c, signed long long int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4slli operator+(struct vec4slli& other)
		{
			return vec4slli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4slli operator-(struct vec4slli& other)
		{
			return vec4slli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4slli operator*(struct vec4slli& other)
		{
			return vec4slli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4slli operator/(struct vec4slli& other)
		{
			return vec4slli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4slli operator+=(struct vec4slli& other)
		{
			return vec4slli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4slli operator-=(struct vec4slli& other)
		{
			return vec4slli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4slli operator*=(struct vec4slli& other)
		{
			return vec4slli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4slli operator/=(struct vec4slli& other)
		{
			return vec4slli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		signed long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4slli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		signed long long int dot(vec4slli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4slli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4slli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4slli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4slli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ull
	#endif
	#ifdef use_vec4ull
	struct vec4ull
	{
		unsigned long long a;
		unsigned long long b;
		unsigned long long c;
		unsigned long long d;
		vec4ull(unsigned long long a, unsigned long long b, unsigned long long c, unsigned long long d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ull operator+(struct vec4ull& other)
		{
			return vec4ull(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ull operator-(struct vec4ull& other)
		{
			return vec4ull(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ull operator*(struct vec4ull& other)
		{
			return vec4ull(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ull operator/(struct vec4ull& other)
		{
			return vec4ull(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ull operator+=(struct vec4ull& other)
		{
			return vec4ull(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ull operator-=(struct vec4ull& other)
		{
			return vec4ull(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ull operator*=(struct vec4ull& other)
		{
			return vec4ull(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ull operator/=(struct vec4ull& other)
		{
			return vec4ull(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		unsigned long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ull const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		unsigned long long dot(vec4ull other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ull& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ull& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ull& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ull */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ulli
	#endif
	#ifdef use_vec4ulli
	struct vec4ulli
	{
		unsigned long long int a;
		unsigned long long int b;
		unsigned long long int c;
		unsigned long long int d;
		vec4ulli(unsigned long long int a, unsigned long long int b, unsigned long long int c, unsigned long long int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ulli operator+(struct vec4ulli& other)
		{
			return vec4ulli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ulli operator-(struct vec4ulli& other)
		{
			return vec4ulli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ulli operator*(struct vec4ulli& other)
		{
			return vec4ulli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ulli operator/(struct vec4ulli& other)
		{
			return vec4ulli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ulli operator+=(struct vec4ulli& other)
		{
			return vec4ulli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ulli operator-=(struct vec4ulli& other)
		{
			return vec4ulli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ulli operator*=(struct vec4ulli& other)
		{
			return vec4ulli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ulli operator/=(struct vec4ulli& other)
		{
			return vec4ulli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		unsigned long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ulli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		unsigned long long int dot(vec4ulli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ulli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ulli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ulli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ulli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4f
	#endif
	#ifdef use_vec4f
	struct vec4f
	{
		float a;
		float b;
		float c;
		float d;
		vec4f(float a, float b, float c, float d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4f operator+(struct vec4f& other)
		{
			return vec4f(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4f operator-(struct vec4f& other)
		{
			return vec4f(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4f operator*(struct vec4f& other)
		{
			return vec4f(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4f operator/(struct vec4f& other)
		{
			return vec4f(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4f operator+=(struct vec4f& other)
		{
			return vec4f(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4f operator-=(struct vec4f& other)
		{
			return vec4f(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4f operator*=(struct vec4f& other)
		{
			return vec4f(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4f operator/=(struct vec4f& other)
		{
			return vec4f(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		float magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4f const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		float dot(vec4f other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4f& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4f& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4f& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4f */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4d
	#endif
	#ifdef use_vec4d
	struct vec4d
	{
		double a;
		double b;
		double c;
		double d;
		vec4d(double a, double b, double c, double d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4d operator+(struct vec4d& other)
		{
			return vec4d(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4d operator-(struct vec4d& other)
		{
			return vec4d(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4d operator*(struct vec4d& other)
		{
			return vec4d(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4d operator/(struct vec4d& other)
		{
			return vec4d(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4d operator+=(struct vec4d& other)
		{
			return vec4d(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4d operator-=(struct vec4d& other)
		{
			return vec4d(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4d operator*=(struct vec4d& other)
		{
			return vec4d(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4d operator/=(struct vec4d& other)
		{
			return vec4d(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		double magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4d const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		double dot(vec4d other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4d& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4d& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4d& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4d */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec4ld
	#endif
	#ifdef use_vec4ld
	struct vec4ld
	{
		long double a;
		long double b;
		long double c;
		long double d;
		vec4ld(long double a, long double b, long double c, long double d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		vec4ld operator+(struct vec4ld& other)
		{
			return vec4ld(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d);
		}
		vec4ld operator-(struct vec4ld& other)
		{
			return vec4ld(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d);
		}
		vec4ld operator*(struct vec4ld& other)
		{
			return vec4ld(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d);
		}
		vec4ld operator/(struct vec4ld& other)
		{
			return vec4ld(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d);
		}
		vec4ld operator+=(struct vec4ld& other)
		{
			return vec4ld(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d);
		}
		vec4ld operator-=(struct vec4ld& other)
		{
			return vec4ld(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d);
		}
		vec4ld operator*=(struct vec4ld& other)
		{
			return vec4ld(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d);
		}
		vec4ld operator/=(struct vec4ld& other)
		{
			return vec4ld(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d);
		}
		long double magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d;
		}
		friend std::ostream& operator<<(std::ostream& os, vec4ld const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << "]";
		}
		long double dot(vec4ld other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d;
		}
		bool operator<(vec4ld& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec4ld& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec4ld& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d;
		}
	};
	#endif /* use_vec4ld */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5sh
	#endif
	#ifdef use_vec5sh
	struct vec5sh
	{
		short a;
		short b;
		short c;
		short d;
		short e;
		vec5sh(short a, short b, short c, short d, short e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5sh operator+(struct vec5sh& other)
		{
			return vec5sh(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5sh operator-(struct vec5sh& other)
		{
			return vec5sh(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5sh operator*(struct vec5sh& other)
		{
			return vec5sh(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5sh operator/(struct vec5sh& other)
		{
			return vec5sh(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5sh operator+=(struct vec5sh& other)
		{
			return vec5sh(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5sh operator-=(struct vec5sh& other)
		{
			return vec5sh(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5sh operator*=(struct vec5sh& other)
		{
			return vec5sh(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5sh operator/=(struct vec5sh& other)
		{
			return vec5sh(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5sh const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		short dot(vec5sh other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5sh& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5sh& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5sh& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5sh */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5shi
	#endif
	#ifdef use_vec5shi
	struct vec5shi
	{
		short int a;
		short int b;
		short int c;
		short int d;
		short int e;
		vec5shi(short int a, short int b, short int c, short int d, short int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5shi operator+(struct vec5shi& other)
		{
			return vec5shi(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5shi operator-(struct vec5shi& other)
		{
			return vec5shi(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5shi operator*(struct vec5shi& other)
		{
			return vec5shi(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5shi operator/(struct vec5shi& other)
		{
			return vec5shi(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5shi operator+=(struct vec5shi& other)
		{
			return vec5shi(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5shi operator-=(struct vec5shi& other)
		{
			return vec5shi(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5shi operator*=(struct vec5shi& other)
		{
			return vec5shi(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5shi operator/=(struct vec5shi& other)
		{
			return vec5shi(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5shi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		short int dot(vec5shi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5shi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5shi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5shi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5shi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ssh
	#endif
	#ifdef use_vec5ssh
	struct vec5ssh
	{
		signed short a;
		signed short b;
		signed short c;
		signed short d;
		signed short e;
		vec5ssh(signed short a, signed short b, signed short c, signed short d, signed short e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ssh operator+(struct vec5ssh& other)
		{
			return vec5ssh(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ssh operator-(struct vec5ssh& other)
		{
			return vec5ssh(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ssh operator*(struct vec5ssh& other)
		{
			return vec5ssh(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ssh operator/(struct vec5ssh& other)
		{
			return vec5ssh(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ssh operator+=(struct vec5ssh& other)
		{
			return vec5ssh(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ssh operator-=(struct vec5ssh& other)
		{
			return vec5ssh(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ssh operator*=(struct vec5ssh& other)
		{
			return vec5ssh(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ssh operator/=(struct vec5ssh& other)
		{
			return vec5ssh(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		signed short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ssh const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		signed short dot(vec5ssh other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ssh& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ssh& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ssh& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ssh */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5sshi
	#endif
	#ifdef use_vec5sshi
	struct vec5sshi
	{
		signed short int a;
		signed short int b;
		signed short int c;
		signed short int d;
		signed short int e;
		vec5sshi(signed short int a, signed short int b, signed short int c, signed short int d, signed short int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5sshi operator+(struct vec5sshi& other)
		{
			return vec5sshi(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5sshi operator-(struct vec5sshi& other)
		{
			return vec5sshi(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5sshi operator*(struct vec5sshi& other)
		{
			return vec5sshi(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5sshi operator/(struct vec5sshi& other)
		{
			return vec5sshi(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5sshi operator+=(struct vec5sshi& other)
		{
			return vec5sshi(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5sshi operator-=(struct vec5sshi& other)
		{
			return vec5sshi(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5sshi operator*=(struct vec5sshi& other)
		{
			return vec5sshi(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5sshi operator/=(struct vec5sshi& other)
		{
			return vec5sshi(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		signed short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5sshi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		signed short int dot(vec5sshi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5sshi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5sshi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5sshi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5sshi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5u
	#endif
	#ifdef use_vec5u
	struct vec5u
	{
		unsigned a;
		unsigned b;
		unsigned c;
		unsigned d;
		unsigned e;
		vec5u(unsigned a, unsigned b, unsigned c, unsigned d, unsigned e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5u operator+(struct vec5u& other)
		{
			return vec5u(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5u operator-(struct vec5u& other)
		{
			return vec5u(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5u operator*(struct vec5u& other)
		{
			return vec5u(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5u operator/(struct vec5u& other)
		{
			return vec5u(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5u operator+=(struct vec5u& other)
		{
			return vec5u(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5u operator-=(struct vec5u& other)
		{
			return vec5u(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5u operator*=(struct vec5u& other)
		{
			return vec5u(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5u operator/=(struct vec5u& other)
		{
			return vec5u(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		unsigned magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5u const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		unsigned dot(vec5u other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5u& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5u& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5u& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5u */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ush
	#endif
	#ifdef use_vec5ush
	struct vec5ush
	{
		unsigned short a;
		unsigned short b;
		unsigned short c;
		unsigned short d;
		unsigned short e;
		vec5ush(unsigned short a, unsigned short b, unsigned short c, unsigned short d, unsigned short e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ush operator+(struct vec5ush& other)
		{
			return vec5ush(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ush operator-(struct vec5ush& other)
		{
			return vec5ush(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ush operator*(struct vec5ush& other)
		{
			return vec5ush(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ush operator/(struct vec5ush& other)
		{
			return vec5ush(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ush operator+=(struct vec5ush& other)
		{
			return vec5ush(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ush operator-=(struct vec5ush& other)
		{
			return vec5ush(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ush operator*=(struct vec5ush& other)
		{
			return vec5ush(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ush operator/=(struct vec5ush& other)
		{
			return vec5ush(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		unsigned short magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ush const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		unsigned short dot(vec5ush other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ush& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ush& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ush& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ush */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ushi
	#endif
	#ifdef use_vec5ushi
	struct vec5ushi
	{
		unsigned short int a;
		unsigned short int b;
		unsigned short int c;
		unsigned short int d;
		unsigned short int e;
		vec5ushi(unsigned short int a, unsigned short int b, unsigned short int c, unsigned short int d, unsigned short int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ushi operator+(struct vec5ushi& other)
		{
			return vec5ushi(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ushi operator-(struct vec5ushi& other)
		{
			return vec5ushi(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ushi operator*(struct vec5ushi& other)
		{
			return vec5ushi(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ushi operator/(struct vec5ushi& other)
		{
			return vec5ushi(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ushi operator+=(struct vec5ushi& other)
		{
			return vec5ushi(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ushi operator-=(struct vec5ushi& other)
		{
			return vec5ushi(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ushi operator*=(struct vec5ushi& other)
		{
			return vec5ushi(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ushi operator/=(struct vec5ushi& other)
		{
			return vec5ushi(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		unsigned short int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ushi const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		unsigned short int dot(vec5ushi other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ushi& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ushi& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ushi& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ushi */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5i
	#endif
	#ifdef use_vec5i
	struct vec5i
	{
		int a;
		int b;
		int c;
		int d;
		int e;
		vec5i(int a, int b, int c, int d, int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5i operator+(struct vec5i& other)
		{
			return vec5i(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5i operator-(struct vec5i& other)
		{
			return vec5i(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5i operator*(struct vec5i& other)
		{
			return vec5i(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5i operator/(struct vec5i& other)
		{
			return vec5i(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5i operator+=(struct vec5i& other)
		{
			return vec5i(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5i operator-=(struct vec5i& other)
		{
			return vec5i(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5i operator*=(struct vec5i& other)
		{
			return vec5i(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5i operator/=(struct vec5i& other)
		{
			return vec5i(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5i const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		int dot(vec5i other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5i& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5i& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5i& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5i */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5s
	#endif
	#ifdef use_vec5s
	struct vec5s
	{
		signed a;
		signed b;
		signed c;
		signed d;
		signed e;
		vec5s(signed a, signed b, signed c, signed d, signed e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5s operator+(struct vec5s& other)
		{
			return vec5s(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5s operator-(struct vec5s& other)
		{
			return vec5s(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5s operator*(struct vec5s& other)
		{
			return vec5s(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5s operator/(struct vec5s& other)
		{
			return vec5s(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5s operator+=(struct vec5s& other)
		{
			return vec5s(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5s operator-=(struct vec5s& other)
		{
			return vec5s(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5s operator*=(struct vec5s& other)
		{
			return vec5s(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5s operator/=(struct vec5s& other)
		{
			return vec5s(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		signed magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5s const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		signed dot(vec5s other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5s& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5s& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5s& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5s */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5si
	#endif
	#ifdef use_vec5si
	struct vec5si
	{
		signed int a;
		signed int b;
		signed int c;
		signed int d;
		signed int e;
		vec5si(signed int a, signed int b, signed int c, signed int d, signed int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5si operator+(struct vec5si& other)
		{
			return vec5si(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5si operator-(struct vec5si& other)
		{
			return vec5si(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5si operator*(struct vec5si& other)
		{
			return vec5si(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5si operator/(struct vec5si& other)
		{
			return vec5si(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5si operator+=(struct vec5si& other)
		{
			return vec5si(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5si operator-=(struct vec5si& other)
		{
			return vec5si(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5si operator*=(struct vec5si& other)
		{
			return vec5si(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5si operator/=(struct vec5si& other)
		{
			return vec5si(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		signed int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5si const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		signed int dot(vec5si other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5si& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5si& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5si& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5si */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ui
	#endif
	#ifdef use_vec5ui
	struct vec5ui
	{
		unsigned int a;
		unsigned int b;
		unsigned int c;
		unsigned int d;
		unsigned int e;
		vec5ui(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ui operator+(struct vec5ui& other)
		{
			return vec5ui(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ui operator-(struct vec5ui& other)
		{
			return vec5ui(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ui operator*(struct vec5ui& other)
		{
			return vec5ui(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ui operator/(struct vec5ui& other)
		{
			return vec5ui(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ui operator+=(struct vec5ui& other)
		{
			return vec5ui(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ui operator-=(struct vec5ui& other)
		{
			return vec5ui(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ui operator*=(struct vec5ui& other)
		{
			return vec5ui(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ui operator/=(struct vec5ui& other)
		{
			return vec5ui(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		unsigned int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ui const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		unsigned int dot(vec5ui other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ui& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ui& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ui& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ui */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5l
	#endif
	#ifdef use_vec5l
	struct vec5l
	{
		long a;
		long b;
		long c;
		long d;
		long e;
		vec5l(long a, long b, long c, long d, long e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5l operator+(struct vec5l& other)
		{
			return vec5l(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5l operator-(struct vec5l& other)
		{
			return vec5l(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5l operator*(struct vec5l& other)
		{
			return vec5l(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5l operator/(struct vec5l& other)
		{
			return vec5l(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5l operator+=(struct vec5l& other)
		{
			return vec5l(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5l operator-=(struct vec5l& other)
		{
			return vec5l(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5l operator*=(struct vec5l& other)
		{
			return vec5l(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5l operator/=(struct vec5l& other)
		{
			return vec5l(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5l const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		long dot(vec5l other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5l& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5l& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5l& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5l */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5li
	#endif
	#ifdef use_vec5li
	struct vec5li
	{
		long int a;
		long int b;
		long int c;
		long int d;
		long int e;
		vec5li(long int a, long int b, long int c, long int d, long int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5li operator+(struct vec5li& other)
		{
			return vec5li(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5li operator-(struct vec5li& other)
		{
			return vec5li(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5li operator*(struct vec5li& other)
		{
			return vec5li(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5li operator/(struct vec5li& other)
		{
			return vec5li(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5li operator+=(struct vec5li& other)
		{
			return vec5li(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5li operator-=(struct vec5li& other)
		{
			return vec5li(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5li operator*=(struct vec5li& other)
		{
			return vec5li(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5li operator/=(struct vec5li& other)
		{
			return vec5li(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5li const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		long int dot(vec5li other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5li& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5li& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5li& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5li */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5sl
	#endif
	#ifdef use_vec5sl
	struct vec5sl
	{
		signed long a;
		signed long b;
		signed long c;
		signed long d;
		signed long e;
		vec5sl(signed long a, signed long b, signed long c, signed long d, signed long e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5sl operator+(struct vec5sl& other)
		{
			return vec5sl(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5sl operator-(struct vec5sl& other)
		{
			return vec5sl(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5sl operator*(struct vec5sl& other)
		{
			return vec5sl(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5sl operator/(struct vec5sl& other)
		{
			return vec5sl(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5sl operator+=(struct vec5sl& other)
		{
			return vec5sl(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5sl operator-=(struct vec5sl& other)
		{
			return vec5sl(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5sl operator*=(struct vec5sl& other)
		{
			return vec5sl(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5sl operator/=(struct vec5sl& other)
		{
			return vec5sl(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		signed long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5sl const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		signed long dot(vec5sl other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5sl& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5sl& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5sl& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5sl */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5sli
	#endif
	#ifdef use_vec5sli
	struct vec5sli
	{
		signed long int a;
		signed long int b;
		signed long int c;
		signed long int d;
		signed long int e;
		vec5sli(signed long int a, signed long int b, signed long int c, signed long int d, signed long int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5sli operator+(struct vec5sli& other)
		{
			return vec5sli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5sli operator-(struct vec5sli& other)
		{
			return vec5sli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5sli operator*(struct vec5sli& other)
		{
			return vec5sli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5sli operator/(struct vec5sli& other)
		{
			return vec5sli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5sli operator+=(struct vec5sli& other)
		{
			return vec5sli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5sli operator-=(struct vec5sli& other)
		{
			return vec5sli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5sli operator*=(struct vec5sli& other)
		{
			return vec5sli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5sli operator/=(struct vec5sli& other)
		{
			return vec5sli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		signed long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5sli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		signed long int dot(vec5sli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5sli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5sli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5sli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5sli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ul
	#endif
	#ifdef use_vec5ul
	struct vec5ul
	{
		unsigned long a;
		unsigned long b;
		unsigned long c;
		unsigned long d;
		unsigned long e;
		vec5ul(unsigned long a, unsigned long b, unsigned long c, unsigned long d, unsigned long e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ul operator+(struct vec5ul& other)
		{
			return vec5ul(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ul operator-(struct vec5ul& other)
		{
			return vec5ul(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ul operator*(struct vec5ul& other)
		{
			return vec5ul(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ul operator/(struct vec5ul& other)
		{
			return vec5ul(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ul operator+=(struct vec5ul& other)
		{
			return vec5ul(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ul operator-=(struct vec5ul& other)
		{
			return vec5ul(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ul operator*=(struct vec5ul& other)
		{
			return vec5ul(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ul operator/=(struct vec5ul& other)
		{
			return vec5ul(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		unsigned long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ul const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		unsigned long dot(vec5ul other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ul& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ul& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ul& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ul */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5uli
	#endif
	#ifdef use_vec5uli
	struct vec5uli
	{
		unsigned long int a;
		unsigned long int b;
		unsigned long int c;
		unsigned long int d;
		unsigned long int e;
		vec5uli(unsigned long int a, unsigned long int b, unsigned long int c, unsigned long int d, unsigned long int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5uli operator+(struct vec5uli& other)
		{
			return vec5uli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5uli operator-(struct vec5uli& other)
		{
			return vec5uli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5uli operator*(struct vec5uli& other)
		{
			return vec5uli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5uli operator/(struct vec5uli& other)
		{
			return vec5uli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5uli operator+=(struct vec5uli& other)
		{
			return vec5uli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5uli operator-=(struct vec5uli& other)
		{
			return vec5uli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5uli operator*=(struct vec5uli& other)
		{
			return vec5uli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5uli operator/=(struct vec5uli& other)
		{
			return vec5uli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		unsigned long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5uli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		unsigned long int dot(vec5uli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5uli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5uli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5uli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5uli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ll
	#endif
	#ifdef use_vec5ll
	struct vec5ll
	{
		long long a;
		long long b;
		long long c;
		long long d;
		long long e;
		vec5ll(long long a, long long b, long long c, long long d, long long e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ll operator+(struct vec5ll& other)
		{
			return vec5ll(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ll operator-(struct vec5ll& other)
		{
			return vec5ll(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ll operator*(struct vec5ll& other)
		{
			return vec5ll(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ll operator/(struct vec5ll& other)
		{
			return vec5ll(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ll operator+=(struct vec5ll& other)
		{
			return vec5ll(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ll operator-=(struct vec5ll& other)
		{
			return vec5ll(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ll operator*=(struct vec5ll& other)
		{
			return vec5ll(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ll operator/=(struct vec5ll& other)
		{
			return vec5ll(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ll const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		long long dot(vec5ll other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ll& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ll& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ll& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ll */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5lli
	#endif
	#ifdef use_vec5lli
	struct vec5lli
	{
		long long int a;
		long long int b;
		long long int c;
		long long int d;
		long long int e;
		vec5lli(long long int a, long long int b, long long int c, long long int d, long long int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5lli operator+(struct vec5lli& other)
		{
			return vec5lli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5lli operator-(struct vec5lli& other)
		{
			return vec5lli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5lli operator*(struct vec5lli& other)
		{
			return vec5lli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5lli operator/(struct vec5lli& other)
		{
			return vec5lli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5lli operator+=(struct vec5lli& other)
		{
			return vec5lli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5lli operator-=(struct vec5lli& other)
		{
			return vec5lli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5lli operator*=(struct vec5lli& other)
		{
			return vec5lli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5lli operator/=(struct vec5lli& other)
		{
			return vec5lli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5lli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		long long int dot(vec5lli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5lli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5lli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5lli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5lli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5sll
	#endif
	#ifdef use_vec5sll
	struct vec5sll
	{
		signed long long a;
		signed long long b;
		signed long long c;
		signed long long d;
		signed long long e;
		vec5sll(signed long long a, signed long long b, signed long long c, signed long long d, signed long long e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5sll operator+(struct vec5sll& other)
		{
			return vec5sll(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5sll operator-(struct vec5sll& other)
		{
			return vec5sll(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5sll operator*(struct vec5sll& other)
		{
			return vec5sll(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5sll operator/(struct vec5sll& other)
		{
			return vec5sll(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5sll operator+=(struct vec5sll& other)
		{
			return vec5sll(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5sll operator-=(struct vec5sll& other)
		{
			return vec5sll(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5sll operator*=(struct vec5sll& other)
		{
			return vec5sll(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5sll operator/=(struct vec5sll& other)
		{
			return vec5sll(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		signed long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5sll const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		signed long long dot(vec5sll other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5sll& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5sll& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5sll& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5sll */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5slli
	#endif
	#ifdef use_vec5slli
	struct vec5slli
	{
		signed long long int a;
		signed long long int b;
		signed long long int c;
		signed long long int d;
		signed long long int e;
		vec5slli(signed long long int a, signed long long int b, signed long long int c, signed long long int d, signed long long int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5slli operator+(struct vec5slli& other)
		{
			return vec5slli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5slli operator-(struct vec5slli& other)
		{
			return vec5slli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5slli operator*(struct vec5slli& other)
		{
			return vec5slli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5slli operator/(struct vec5slli& other)
		{
			return vec5slli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5slli operator+=(struct vec5slli& other)
		{
			return vec5slli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5slli operator-=(struct vec5slli& other)
		{
			return vec5slli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5slli operator*=(struct vec5slli& other)
		{
			return vec5slli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5slli operator/=(struct vec5slli& other)
		{
			return vec5slli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		signed long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5slli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		signed long long int dot(vec5slli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5slli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5slli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5slli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5slli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ull
	#endif
	#ifdef use_vec5ull
	struct vec5ull
	{
		unsigned long long a;
		unsigned long long b;
		unsigned long long c;
		unsigned long long d;
		unsigned long long e;
		vec5ull(unsigned long long a, unsigned long long b, unsigned long long c, unsigned long long d, unsigned long long e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ull operator+(struct vec5ull& other)
		{
			return vec5ull(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ull operator-(struct vec5ull& other)
		{
			return vec5ull(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ull operator*(struct vec5ull& other)
		{
			return vec5ull(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ull operator/(struct vec5ull& other)
		{
			return vec5ull(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ull operator+=(struct vec5ull& other)
		{
			return vec5ull(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ull operator-=(struct vec5ull& other)
		{
			return vec5ull(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ull operator*=(struct vec5ull& other)
		{
			return vec5ull(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ull operator/=(struct vec5ull& other)
		{
			return vec5ull(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		unsigned long long magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ull const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		unsigned long long dot(vec5ull other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ull& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ull& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ull& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ull */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ulli
	#endif
	#ifdef use_vec5ulli
	struct vec5ulli
	{
		unsigned long long int a;
		unsigned long long int b;
		unsigned long long int c;
		unsigned long long int d;
		unsigned long long int e;
		vec5ulli(unsigned long long int a, unsigned long long int b, unsigned long long int c, unsigned long long int d, unsigned long long int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ulli operator+(struct vec5ulli& other)
		{
			return vec5ulli(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ulli operator-(struct vec5ulli& other)
		{
			return vec5ulli(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ulli operator*(struct vec5ulli& other)
		{
			return vec5ulli(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ulli operator/(struct vec5ulli& other)
		{
			return vec5ulli(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ulli operator+=(struct vec5ulli& other)
		{
			return vec5ulli(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ulli operator-=(struct vec5ulli& other)
		{
			return vec5ulli(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ulli operator*=(struct vec5ulli& other)
		{
			return vec5ulli(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ulli operator/=(struct vec5ulli& other)
		{
			return vec5ulli(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		unsigned long long int magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ulli const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		unsigned long long int dot(vec5ulli other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ulli& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ulli& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ulli& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ulli */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5f
	#endif
	#ifdef use_vec5f
	struct vec5f
	{
		float a;
		float b;
		float c;
		float d;
		float e;
		vec5f(float a, float b, float c, float d, float e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5f operator+(struct vec5f& other)
		{
			return vec5f(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5f operator-(struct vec5f& other)
		{
			return vec5f(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5f operator*(struct vec5f& other)
		{
			return vec5f(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5f operator/(struct vec5f& other)
		{
			return vec5f(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5f operator+=(struct vec5f& other)
		{
			return vec5f(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5f operator-=(struct vec5f& other)
		{
			return vec5f(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5f operator*=(struct vec5f& other)
		{
			return vec5f(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5f operator/=(struct vec5f& other)
		{
			return vec5f(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		float magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5f const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		float dot(vec5f other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5f& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5f& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5f& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5f */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5d
	#endif
	#ifdef use_vec5d
	struct vec5d
	{
		double a;
		double b;
		double c;
		double d;
		double e;
		vec5d(double a, double b, double c, double d, double e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5d operator+(struct vec5d& other)
		{
			return vec5d(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5d operator-(struct vec5d& other)
		{
			return vec5d(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5d operator*(struct vec5d& other)
		{
			return vec5d(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5d operator/(struct vec5d& other)
		{
			return vec5d(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5d operator+=(struct vec5d& other)
		{
			return vec5d(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5d operator-=(struct vec5d& other)
		{
			return vec5d(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5d operator*=(struct vec5d& other)
		{
			return vec5d(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5d operator/=(struct vec5d& other)
		{
			return vec5d(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		double magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5d const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		double dot(vec5d other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5d& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5d& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5d& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5d */
	#ifdef use_all_vectors_in_gffvector
		#define use_vec5ld
	#endif
	#ifdef use_vec5ld
	struct vec5ld
	{
		long double a;
		long double b;
		long double c;
		long double d;
		long double e;
		vec5ld(long double a, long double b, long double c, long double d, long double e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
		}
		vec5ld operator+(struct vec5ld& other)
		{
			return vec5ld(this->a+other.a, this->b+other.b, this->c+other.c, this->d+other.d, this->e+other.e);
		}
		vec5ld operator-(struct vec5ld& other)
		{
			return vec5ld(this->a-other.a, this->b-other.b, this->c-other.c, this->d-other.d, this->e-other.e);
		}
		vec5ld operator*(struct vec5ld& other)
		{
			return vec5ld(this->a*other.a, this->b*other.b, this->c*other.c, this->d*other.d, this->e*other.e);
		}
		vec5ld operator/(struct vec5ld& other)
		{
			return vec5ld(this->a/other.a, this->b/other.b, this->c/other.c, this->d/other.d, this->e/other.e);
		}
		vec5ld operator+=(struct vec5ld& other)
		{
			return vec5ld(this->a+=other.a, this->b+=other.b, this->c+=other.c, this->d+=other.d, this->e+=other.e);
		}
		vec5ld operator-=(struct vec5ld& other)
		{
			return vec5ld(this->a-=other.a, this->b-=other.b, this->c-=other.c, this->d-=other.d, this->e-=other.e);
		}
		vec5ld operator*=(struct vec5ld& other)
		{
			return vec5ld(this->a*=other.a, this->b*=other.b, this->c*=other.c, this->d*=other.d, this->e*=other.e);
		}
		vec5ld operator/=(struct vec5ld& other)
		{
			return vec5ld(this->a/=other.a, this->b/=other.b, this->c/=other.c, this->d/=other.d, this->e/=other.e);
		}
		long double magnitude()
		{
			return this->a*this->a+this->b*this->b+this->c*this->c+this->d*this->d+this->e*this->e;
		}
		friend std::ostream& operator<<(std::ostream& os, vec5ld const& thisVec)
		{
			return os << "[" << thisVec.a << ", "<< thisVec.b << ", "<< thisVec.c << ", "<< thisVec.d << ", "<< thisVec.e << "]";
		}
		long double dot(vec5ld other)
		{
			return this->a*other.a+this->b*other.b+this->c*other.c+this->d*other.d+this->e*other.e;
		}
		bool operator<(vec5ld& other)
		{
			return (this->magnitude() < other.magnitude());
		}
		bool operator>(vec5ld& other)
		{
			return (this->magnitude() > other.magnitude());
		}
		bool operator==(vec5ld& other)
		{
			return this->a==other.a&&this->b==other.b&&this->c==other.c&&this->d==other.d&&this->e==other.e;
		}
	};
	#endif /* use_vec5ld */
}
#endif
