//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFGenericFileContentItem.h>

@class NSDictionary;

@interface WFRemoteContentItem : WFGenericFileContentItem
{
    NSDictionary *_serializedItem;
}

@property (copy, nonatomic) NSDictionary *serializedItem; // @synthesize serializedItem=_serializedItem;

+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4;
- (void).cxx_destruct;
- (id)initWithSerializedItem:(id)arg1 named:(id)arg2 attributionSet:(id)arg3;
- (id)metadataForSerialization;
- (id)name;
- (id)preferredFileType;

@end

