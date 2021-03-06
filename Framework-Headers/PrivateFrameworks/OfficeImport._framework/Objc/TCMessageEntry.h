//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TCMessageEntry : NSObject
{
    unsigned long long m_timeStamp;
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
    NSString *additionalText;
}

@property (copy, nonatomic) NSString *additionalText; // @synthesize additionalText;
@property (nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=m_timeStamp;

+ (void)initialize;
- (void).cxx_destruct;
- (void)addAffectedObject:(id)arg1;
- (id)affectedObjects;
- (id)description;
- (id)getAdditionalText;
- (int)getCount;
- (int)getMessageTag;
- (id)getMessageText;
- (id)getParameter:(unsigned int)arg1;
- (unsigned long long)getParameterCount;
- (unsigned long long)hash;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(struct __va_list_tag [1])arg4;
- (BOOL)isEqual:(id)arg1;
- (void)mergeEntries:(id)arg1;
- (long long)timeStampCompare:(id)arg1;

@end

