//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKPhoto, UIImage;

@interface NTKCachedPhoto : NSObject
{
    UIImage *_image;
    NTKPhoto *_photo;
    long long _index;
}

@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) long long index; // @synthesize index=_index;
@property (readonly, nonatomic) NTKPhoto *photo; // @synthesize photo=_photo;

- (void).cxx_destruct;
- (id)initWithPhoto:(id)arg1;
- (id)initWithPhoto:(id)arg1 index:(long long)arg2;
- (BOOL)load;

@end
