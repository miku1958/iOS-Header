//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUNumberFormat.h>

@interface TSUNumberFormat (TSCHArchivingUtilities)
+ (id)instanceWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
+ (id)numberFormatFromFormatStruct:(CDStruct_4f52a90b)arg1;
- (CDStruct_4f52a90b)formatStructAndCustomFormatData:(id *)arg1;
- (id)initWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct FormatStructArchive *)arg1 archiver:(id)arg2;
@end
