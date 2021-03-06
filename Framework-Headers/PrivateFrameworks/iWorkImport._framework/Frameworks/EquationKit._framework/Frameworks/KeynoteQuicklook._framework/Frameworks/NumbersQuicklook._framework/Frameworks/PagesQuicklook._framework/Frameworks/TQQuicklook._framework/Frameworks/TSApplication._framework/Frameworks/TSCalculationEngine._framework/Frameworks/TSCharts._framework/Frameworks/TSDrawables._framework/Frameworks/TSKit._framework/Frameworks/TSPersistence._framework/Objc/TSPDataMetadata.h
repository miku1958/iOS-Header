//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

@class TSUColor;

@interface TSPDataMetadata : TSPObject
{
    TSUColor *_fallbackColor;
}

@property (copy, nonatomic) TSUColor *fallbackColor; // @synthesize fallbackColor=_fallbackColor;

- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (void)loadFromMessage:(const struct DataMetadata *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct DataMetadata *)arg1 archiver:(id)arg2;

@end

