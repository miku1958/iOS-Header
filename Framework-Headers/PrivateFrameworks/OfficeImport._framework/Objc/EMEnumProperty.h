//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

__attribute__((visibility("hidden")))
@interface EMEnumProperty : CMProperty
{
    int wdValue;
}

+ (id)mapHorizontalAlignmentValue:(int)arg1;
+ (id)mapUnderlineValue:(int)arg1;
+ (id)mapVerticalAlignmentValue:(int)arg1;
- (id)cssStringForName:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithEnum:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mapHorizontalAlignment;
- (id)mapUnderline;
- (id)mapVerticalAlignment;
- (int)value;

@end
