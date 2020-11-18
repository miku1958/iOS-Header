//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceStateCharacteristicRecipe : NSObject <NAIdentifiable, NSCopying>
{
    BOOL _required;
    NSString *_characteristicType;
    id<HFServiceTreeMatching> _servicePredicate;
}

@property (readonly, copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isRequired) BOOL required; // @synthesize required=_required;
@property (readonly, nonatomic) id<HFServiceTreeMatching> servicePredicate; // @synthesize servicePredicate=_servicePredicate;
@property (readonly) Class superclass;

+ (id)na_identity;
+ (id)recipeForRootServiceCharacteristicType:(id)arg1 required:(BOOL)arg2;
+ (id)recipesForRootServiceCharacteristicTypes:(id)arg1 required:(BOOL)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCharacteristicType:(id)arg1 servicePredicate:(id)arg2 required:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)matchResultForServices:(id)arg1;

@end

