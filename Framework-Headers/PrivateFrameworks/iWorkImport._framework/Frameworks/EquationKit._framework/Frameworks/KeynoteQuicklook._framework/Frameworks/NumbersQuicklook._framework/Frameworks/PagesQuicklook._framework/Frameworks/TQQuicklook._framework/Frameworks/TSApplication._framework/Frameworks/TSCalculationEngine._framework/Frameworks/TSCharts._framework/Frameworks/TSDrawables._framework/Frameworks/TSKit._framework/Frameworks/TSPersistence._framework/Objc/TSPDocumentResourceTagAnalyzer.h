//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSPersistence/NSFastEnumeration-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface TSPDocumentResourceTagAnalyzer : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *_tagsToDocumentResourceInfosDictionary;
    NSMutableSet *_documentResourceInfos;
    NSMutableSet *_untaggedDocumentResourceInfos;
}

@property (readonly, copy, nonatomic) NSSet *allDocumentResourceInfos;
@property (readonly, copy, nonatomic) NSSet *allTags;
@property (readonly, copy, nonatomic) NSSet *untaggedDocumentResourceInfos;

- (void).cxx_destruct;
- (void)addDocumentResourceInfo:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)minimumTagsWithPreferredTags:(id)arg1;

@end

