//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICLetterpressImageCache : NSObject
{
    NSMutableDictionary *_imageCache;
}

@property (strong, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)imageNamed:(id)arg1 tintColor:(id)arg2;
- (id)init;

@end

