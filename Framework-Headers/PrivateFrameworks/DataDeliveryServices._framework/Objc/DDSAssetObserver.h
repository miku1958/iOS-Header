//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSAssetObserving-Protocol.h>

@class NSSet, NSString;
@protocol DDSAssetObservingDelegate;

@interface DDSAssetObserver : NSObject <DDSAssetObserving>
{
    id<DDSAssetObservingDelegate> _delegate;
    NSSet *_typesToObserve;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DDSAssetObservingDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSSet *typesToObserve; // @synthesize typesToObserve=_typesToObserve;

- (void).cxx_destruct;
- (void)beginObservingTypes:(id)arg1;
- (void)dealloc;
- (void)endObservingTypes:(id)arg1;
- (void)notifyObserversAssetsUpdatedForType:(id)arg1;
- (void)observeAssetTypes:(id)arg1;

@end

