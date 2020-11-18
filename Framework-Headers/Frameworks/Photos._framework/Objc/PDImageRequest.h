//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequest.h>

@class PDImageDecoder, PHImageDisplaySpec, PHImageRequestBehaviorSpec;
@protocol PHImageRequestDelegate;

@interface PDImageRequest : PHMediaRequest
{
    struct os_unfair_lock_s _lock;
    unsigned long long _decodeRequestID;
    PDImageDecoder *_chosenDecoder;
    BOOL _forceIgnoreCache;
    id<PHImageRequestDelegate> _delegate;
    PHImageDisplaySpec *_displaySpec;
    PHImageRequestBehaviorSpec *_behaviorSpec;
}

@property (strong, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property (weak, nonatomic) id<PHImageRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) PHImageDisplaySpec *displaySpec; // @synthesize displaySpec=_displaySpec;

- (void).cxx_destruct;
- (void)_tryChoosingFromFromHintsForRequestSize:(struct CGSize)arg1 excludingKeys:(id)arg2;
- (void)_tryChoosingFromFullResourceListForTargetSize:(struct CGSize)arg1;
- (void)cancel;
- (id)description;
- (void)handleAvailabilityChangeForResource:(id)arg1 locallyAvailable:(BOOL)arg2 info:(id)arg3 error:(id)arg4;
- (id)initWithRequestID:(int)arg1 contextID:(unsigned long long)arg2 managerID:(unsigned long long)arg3 asset:(id)arg4 displaySpec:(id)arg5 behaviorSepc:(id)arg6;
- (BOOL)isSynchronous;
- (void)prepareForReuse;
- (void)startRequest;

@end

