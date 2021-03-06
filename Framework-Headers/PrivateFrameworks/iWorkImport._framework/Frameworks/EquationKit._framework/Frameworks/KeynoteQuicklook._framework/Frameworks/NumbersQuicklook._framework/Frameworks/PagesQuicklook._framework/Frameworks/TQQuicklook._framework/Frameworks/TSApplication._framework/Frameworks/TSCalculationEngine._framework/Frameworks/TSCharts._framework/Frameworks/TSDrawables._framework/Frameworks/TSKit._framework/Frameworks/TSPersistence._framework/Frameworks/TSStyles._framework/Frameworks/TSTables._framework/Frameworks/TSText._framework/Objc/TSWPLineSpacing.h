//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/NSCopying-Protocol.h>
#import <TSText/TSSPropertyValueArchiving-Protocol.h>

@interface TSWPLineSpacing : NSObject <TSSPropertyValueArchiving, NSCopying>
{
    long long _mode;
    double _amount;
    double _baselineRule;
}

@property (readonly, nonatomic) double amount; // @synthesize amount=_amount;
@property (readonly, nonatomic) double baselineRule; // @synthesize baselineRule=_baselineRule;
@property (readonly, nonatomic) long long mode; // @synthesize mode=_mode;

+ (id)instanceWithArchive:(const struct Message *)arg1 unarchiver:(id)arg2;
+ (id)lineSpacing;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct LineSpacingArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithLocalizationDictionary:(id)arg1;
- (id)initWithMode:(long long)arg1 amount:(double)arg2;
- (id)initWithMode:(long long)arg1 amount:(double)arg2 baselineRule:(double)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)saveToArchive:(struct LineSpacingArchive *)arg1 archiver:(id)arg2;

@end

