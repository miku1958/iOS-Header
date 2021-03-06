//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WFContentPropertyContainer-Protocol.h>

@class NSSet;

@interface WFContentPredicate : NSObject <WFContentPropertyContainer>
{
    CDUnknownBlockType _block;
}

@property (readonly, nonatomic) NSSet *containedProperties;

+ (id)falsePredicate;
+ (id)predicateWithBlock:(CDUnknownBlockType)arg1;
+ (id)truePredicate;
- (void).cxx_destruct;
- (void)evaluateWithObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateWithObject:(id)arg1 propertySubstitutor:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

