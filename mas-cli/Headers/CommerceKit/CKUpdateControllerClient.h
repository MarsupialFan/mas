//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISAvailableUpdatesObserver.h"
#import "ISOSUpdateProgressObserver.h"
#import "ISOSUpdateScanObserver.h"

@interface CKUpdateControllerClient : NSObject <ISOSUpdateProgressObserver, ISAvailableUpdatesObserver, ISOSUpdateScanObserver>
{
    CDUnknownBlockType _osUpdateProgressHandler;
    CDUnknownBlockType _availableUpdatesObserverBlock;
    CDUnknownBlockType _osUpdateScanObserverBlock;
}

@property(copy) CDUnknownBlockType osUpdateScanObserverBlock; // @synthesize osUpdateScanObserverBlock=_osUpdateScanObserverBlock;
@property(copy) CDUnknownBlockType availableUpdatesObserverBlock; // @synthesize availableUpdatesObserverBlock=_availableUpdatesObserverBlock;
@property(copy) CDUnknownBlockType osUpdateProgressHandler; // @synthesize osUpdateProgressHandler=_osUpdateProgressHandler;
- (void).cxx_destruct;
- (void)osUpdateScanDidProgressWithPercentComplete:(float)arg1 isFinished:(BOOL)arg2 error:(id)arg3;
- (void)availableUpdatesDidChangedWithUpdates:(id)arg1 osUpdates:(id)arg2 badgeCount:(unsigned long long)arg3;
- (void)osUpdates:(id)arg1 didFailWithError:(id)arg2;
- (void)osUpdates:(id)arg1 didProgressWithState:(long long)arg2 percentComplete:(double)arg3 statusInfo:(id)arg4 includesCriticalUpdates:(BOOL)arg5 canCancel:(BOOL)arg6;

@end
