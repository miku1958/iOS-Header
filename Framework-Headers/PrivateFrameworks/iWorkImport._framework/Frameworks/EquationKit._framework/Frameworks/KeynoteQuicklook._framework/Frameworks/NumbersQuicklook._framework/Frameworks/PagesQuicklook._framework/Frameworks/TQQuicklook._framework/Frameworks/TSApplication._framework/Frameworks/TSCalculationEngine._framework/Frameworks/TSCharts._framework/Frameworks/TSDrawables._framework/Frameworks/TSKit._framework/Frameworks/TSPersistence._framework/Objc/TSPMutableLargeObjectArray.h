//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPAbstractMutableLargeArray.h>

@interface TSPMutableLargeObjectArray : TSPAbstractMutableLargeArray
{
}

+ (Class)arraySegmentClass;
- (void)addObjectsFromArray:(id)arg1;
- (void)loadFromMessage:(const struct LargeObjectArray *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct LargeObjectArray *)arg1 archiver:(id)arg2;

@end

