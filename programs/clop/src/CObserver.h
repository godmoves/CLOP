/////////////////////////////////////////////////////////////////////////////
//
// CObserver.h
//
// Rémi Coulom
//
// October, 2008
//
/////////////////////////////////////////////////////////////////////////////
#ifndef CObserver_Declared
#define CObserver_Declared

class CResults;

class CObserver // obs
{
 protected: /////////////////////////////////////////////////////////////////
  CResults &results;

 public: ////////////////////////////////////////////////////////////////////
  CObserver(CResults &results);

  virtual void OnReset() {}
  virtual void OnSample() {}
  virtual void OnOutcome(int i) {}
  virtual void OnRefresh() {}

  virtual ~CObserver();
};

#endif