//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVWeakReference.h>

@class NSString;

@interface AVRetainReleaseWeakReference : AVWeakReference
{
    NSString *_cachedReferencedObjectDescription;
    id _weakStorage;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithReferencedObject:(id)arg1;
- (id)referencedObject;

@end
