//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSDictionary;

@interface WFCoercionOptions : NSObject <NSCopying>
{
    NSDictionary *_dictionary;
}

@property (readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;

+ (id)new;
+ (id)optionsWithDictionary:(id)arg1;
+ (void)registerDefaultDisallowedCoercionPath:(id)arg1;
- (void).cxx_destruct;
- (BOOL)coercionPathIsDisallowed:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)itemClassPrioritizationType;
- (void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)optionsByAddingContentsOfOptions:(id)arg1;
- (id)preferredTypes;

@end
