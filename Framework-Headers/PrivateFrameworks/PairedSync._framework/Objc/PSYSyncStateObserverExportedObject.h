//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PairedSync/PSYSyncStateObserverInterface-Protocol.h>

@class NSString;
@protocol PSYSyncStateObserverInterface;

@interface PSYSyncStateObserverExportedObject : NSObject <PSYSyncStateObserverInterface>
{
    id<PSYSyncStateObserverInterface> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PSYSyncStateObserverInterface> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)didUpdateSyncForPairingID:(id)arg1;

@end
