//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SFResourceLoader;

__attribute__((visibility("hidden")))
@interface WeakLoader : NSObject
{
    id<SFResourceLoader> _weakLoader;
}

@property (readonly, nonatomic) id<SFResourceLoader> strongloader;

- (void).cxx_destruct;
- (id)initWithLoader:(id)arg1;

@end
