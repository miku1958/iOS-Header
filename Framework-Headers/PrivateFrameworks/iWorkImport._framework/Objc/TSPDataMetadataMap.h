//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSPDataMetadataMap : TSPObject
{
    NSMutableDictionary *_identifierToDataMetadata;
}

- (void).cxx_destruct;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromMessage:(const struct DataMetadataMap *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct DataMetadataMap *)arg1 archiver:(id)arg2;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;

@end
