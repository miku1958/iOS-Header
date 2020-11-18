//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface DESRecipe : NSObject <NSCopying>
{
    NSDictionary *_recipeUserInfo;
    NSArray *_attachments;
    NSDictionary *_parametersUsed;
}

@property (copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property (readonly, copy, nonatomic) NSDictionary *parametersUsed; // @synthesize parametersUsed=_parametersUsed;
@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo; // @synthesize recipeUserInfo=_recipeUserInfo;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_initWithRecipeResponse:(id)arg1 error:(id *)arg2;
- (id)_initWithRecipeUserInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

