//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WBSRadarNewProblemURLBuilder : NSObject
{
    NSString *_componentName;
    NSString *_componentVersion;
    NSString *_title;
    NSString *_descriptionText;
    NSArray *_attachmentURLs;
    long long _classification;
}

@property (copy, nonatomic) NSArray *attachmentURLs; // @synthesize attachmentURLs=_attachmentURLs;
@property (nonatomic) long long classification; // @synthesize classification=_classification;
@property (copy, nonatomic) NSString *componentName; // @synthesize componentName=_componentName;
@property (copy, nonatomic) NSString *componentVersion; // @synthesize componentVersion=_componentVersion;
@property (copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSURL *url;

- (void).cxx_destruct;

@end
