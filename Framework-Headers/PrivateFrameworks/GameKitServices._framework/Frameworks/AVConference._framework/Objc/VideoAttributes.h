//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCoding-Protocol.h>
#import <AVConference/NSCopying-Protocol.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding>
{
    struct CGSize ratio;
    int orientation;
    int camera;
    BOOL cameraSwitching;
    struct CGRect contentsRect;
    BOOL videoSourceScreen;
}

@property (nonatomic) int camera; // @synthesize camera;
@property (nonatomic) BOOL cameraSwitching; // @synthesize cameraSwitching;
@property (nonatomic) struct CGRect contentsRect; // @synthesize contentsRect;
@property (nonatomic) int orientation; // @synthesize orientation;
@property (nonatomic) struct CGSize ratio; // @synthesize ratio;
@property (nonatomic) BOOL videoSourceScreen; // @synthesize videoSourceScreen;

+ (id)videoAttributesWithVideoAttributes:(id)arg1;
- (id)copyEncodedDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize)arg2 contentsRect:(struct CGRect)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (BOOL)isEqualToVideoAttributes:(id)arg1;

@end

