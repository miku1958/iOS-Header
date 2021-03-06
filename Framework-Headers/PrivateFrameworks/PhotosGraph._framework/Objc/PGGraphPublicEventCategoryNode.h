//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphOptimizedNode.h>

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString;

@interface PGGraphPublicEventCategoryNode : PGGraphOptimizedNode <PGGraphLocalizable, PGGraphSynonymSupport>
{
    NSString *_label;
    NSString *_localizedName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly) Class superclass;

+ (id)filter;
- (void).cxx_destruct;
- (id)associatedNodesForRemoval;
- (unsigned short)domain;
- (BOOL)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)label;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)arg1;

@end

