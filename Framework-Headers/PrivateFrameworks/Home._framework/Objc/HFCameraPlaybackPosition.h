//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSDate, NSString;

@interface HFCameraPlaybackPosition : NSObject <NAIdentifiable>
{
    unsigned long long _contentType;
    NSDate *_clipPlaybackDate;
}

@property (readonly, copy, nonatomic) NSDate *clipPlaybackDate; // @synthesize clipPlaybackDate=_clipPlaybackDate;
@property (readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clipPositionWithDate:(id)arg1;
+ (id)livePosition;
+ (id)na_identity;
- (void).cxx_destruct;
- (id)initWithContentType:(unsigned long long)arg1 clipPlaybackDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
