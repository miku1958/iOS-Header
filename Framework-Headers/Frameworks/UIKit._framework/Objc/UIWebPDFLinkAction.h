//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIWebPDFLinkAction : NSObject
{
    int type;
    NSString *title;
    CDUnknownBlockType handler;
}

@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
@property (copy, nonatomic) NSString *title; // @synthesize title;
@property (nonatomic) int type; // @synthesize type;

- (void)dealloc;

@end

