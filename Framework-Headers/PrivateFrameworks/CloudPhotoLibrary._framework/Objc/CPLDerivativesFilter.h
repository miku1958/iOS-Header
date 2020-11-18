//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@interface CPLDerivativesFilter : NSObject <NSSecureCoding>
{
    BOOL _dropForImages;
    BOOL _dropForVideos;
}

+ (id)dropDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initDroppingDerivativesForImages:(BOOL)arg1 videos:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mightDropSomeDerivativesForSourceType:(unsigned long long)arg1 isVideo:(BOOL)arg2;
- (id)redactedDescription;
- (BOOL)shouldDropDerivativeOfType:(unsigned long long)arg1 fromSourceType:(unsigned long long)arg2 isVideo:(BOOL)arg3;

@end
