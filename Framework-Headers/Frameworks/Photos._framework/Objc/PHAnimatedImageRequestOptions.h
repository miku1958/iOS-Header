//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHImageRequestOptions.h>

@interface PHAnimatedImageRequestOptions : PHImageRequestOptions
{
    BOOL _allowPreCaching;
    BOOL _useSharedImageDecoding;
}

@property (nonatomic) BOOL allowPreCaching; // @synthesize allowPreCaching=_allowPreCaching;
@property (nonatomic) BOOL useSharedImageDecoding; // @synthesize useSharedImageDecoding=_useSharedImageDecoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

