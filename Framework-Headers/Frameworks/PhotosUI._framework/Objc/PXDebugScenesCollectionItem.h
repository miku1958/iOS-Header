//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PXDebugScenesCollectionItem : NSObject
{
    NSNumber *_sceneIdentifier;
    NSString *_keyword;
    NSArray *_synonyms;
    NSString *_synonymsString;
}

@property (copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property (strong, nonatomic) NSNumber *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property (copy, nonatomic) NSArray *synonyms; // @synthesize synonyms=_synonyms;
@property (copy, nonatomic) NSString *synonymsString; // @synthesize synonymsString=_synonymsString;

- (void).cxx_destruct;
- (id)_synonymsStringWithSynonyms:(id)arg1;
- (id)initWithSceneIdentifier:(id)arg1 keyword:(id)arg2 synonyms:(id)arg3;

@end

