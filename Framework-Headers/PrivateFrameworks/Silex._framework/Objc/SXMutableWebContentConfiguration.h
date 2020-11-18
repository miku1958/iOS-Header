//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXWebContentConfiguration.h>

@class NSDictionary, NSLocale, NSString;

@interface SXMutableWebContentConfiguration : SXWebContentConfiguration
{
    NSString *storeFront;
    NSLocale *locale;
    NSString *contentSizeCategory;
    NSDictionary *dataSources;
    struct CGSize canvasSize;
    struct CGRect contentFrame;
}

@property (nonatomic) struct CGSize canvasSize; // @synthesize canvasSize;
@property (nonatomic) struct CGRect contentFrame; // @synthesize contentFrame;
@property (copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory;
@property (copy, nonatomic) NSDictionary *dataSources; // @synthesize dataSources;
@property (copy, nonatomic) NSLocale *locale; // @synthesize locale;
@property (copy, nonatomic) NSString *storeFront; // @synthesize storeFront;

- (void).cxx_destruct;

@end

