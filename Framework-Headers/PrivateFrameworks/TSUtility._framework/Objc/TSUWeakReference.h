//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSUWeakReference : NSObject
{
    id mObject;
}

@property (readonly, nonatomic) id object; // @synthesize object=mObject;

+ (id)weakReferenceWithObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)arg1;

@end

