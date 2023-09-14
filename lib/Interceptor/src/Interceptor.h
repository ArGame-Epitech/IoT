#ifndef INTERCEPTOR_H
#define INTERCEPTOR_H

namespace interceptor {
  class IInterceptor {
    public:
      virtual void intercept() = 0;
  };


  class IInterceptorManager {
    public:
      virtual void addInterceptor(IInterceptor* interceptor) = 0;
      virtual void removeInterceptor(IInterceptor* interceptor) = 0;
  };

  class InterceptorManager {
  };

}
#endif // INTERCEPTOR_H