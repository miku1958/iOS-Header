//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSKit/TSKFormat.h>

#import <TSKit/NSCopying-Protocol.h>

@class NSString;

@interface TSKDateTimeFormat : TSKFormat <NSCopying>
{
    NSString *_formatString;
}

@property (readonly, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;

+ (id)defaultDateOnlyShortFormatForLocale:(id)arg1;
- (void).cxx_destruct;
- (id)asDateTimeFormat;
- (unsigned long long)hash;
- (id)initWithFormatString:(id)arg1;
- (id)initWithFormatType:(unsigned int)arg1;
- (id)initWithLocale:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)stringFromDate:(id)arg1 locale:(id)arg2;

@end
