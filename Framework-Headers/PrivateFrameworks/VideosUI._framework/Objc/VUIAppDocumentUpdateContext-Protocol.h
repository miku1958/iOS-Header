//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class IKAppContext, IKUpdateServiceRequest, NSOrderedSet, NSString;

@protocol VUIAppDocumentUpdateContext <NSObject>

@property (readonly, nonatomic) IKUpdateServiceRequest *currentUpdateRequest;

- (void)updateCurrentUpdateRequestWithAppContext:(IKAppContext *)arg1 documentRef:(NSString *)arg2;
- (void)updateRequestCompletedWithViewElements:(NSOrderedSet *)arg1 documentRef:(NSString *)arg2;
@end

