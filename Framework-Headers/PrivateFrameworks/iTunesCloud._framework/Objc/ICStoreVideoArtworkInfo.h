//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ICStoreVideoArtworkInfo : NSObject <NSSecureCoding>
{
    NSDictionary *_aspectRatioToCRABSVideoDictionaries;
    NSDictionary *_aspectRatioToHLSVideoURL;
    NSDictionary *_aspectRatioToPreviewFrameArtworkInfo;
    NSString *_stringRepresentation;
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property (readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CRABSVideoURLMatchingSize:(struct CGSize)arg1;
- (id)HLSVideoURLForAspectRatio:(double)arg1;
- (id)_aspectRatioKeyForAspectRatio:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoArtworkResponseDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)previewFrameArtworkInfoMatchingAspectRatio:(double)arg1;
- (id)supportedSizesForCRABSVideoForAspectRatio:(double)arg1;

@end

