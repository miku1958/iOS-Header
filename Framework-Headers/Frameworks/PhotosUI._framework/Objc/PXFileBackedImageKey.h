//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PXFileBackedImageKey : NSObject
{
    NSURL *_url;
    struct CGSize _size;
}

@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUrl:(id)arg1 size:(struct CGSize)arg2;
- (BOOL)isEqual:(id)arg1;

@end

