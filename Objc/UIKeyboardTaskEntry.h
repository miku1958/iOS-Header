//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskEntry : NSObject <NSCopying>
{
    CDUnknownBlockType __task;
    NSArray *__creationStack;
}

@property (readonly, strong, nonatomic) NSArray *originatingStack; // @synthesize originatingStack=__creationStack;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)execute:(id)arg1;
- (id)initWithTask:(CDUnknownBlockType)arg1;

@end

