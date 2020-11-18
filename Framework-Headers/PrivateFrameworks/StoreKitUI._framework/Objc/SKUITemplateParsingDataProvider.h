//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVURLDataConsumer.h>

@class NSRegularExpression;

@interface SKUITemplateParsingDataProvider : SSVURLDataConsumer
{
    NSRegularExpression *_regularExpression;
}

@property (readonly, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;

+ (id)templateParsingRegularExpression;
- (void).cxx_destruct;
- (id)initWithRegularExpression:(id)arg1;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;

@end

