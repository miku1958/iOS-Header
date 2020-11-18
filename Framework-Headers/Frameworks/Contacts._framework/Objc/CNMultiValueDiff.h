//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CNMultiValueDiff : NSObject
{
    NSArray *_updates;
}

@property (readonly, copy, nonatomic) NSArray *updates; // @synthesize updates=_updates;

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;
+ (id)emptyDiff;
- (void).cxx_destruct;
- (BOOL)applyToABPerson:(void *)arg1 propertyDescription:(id)arg2 error:(id *)arg3;
- (id)description;
- (id)initWithUpdates:(id)arg1;
- (BOOL)isEmpty;
- (id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2;

@end
