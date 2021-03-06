//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CATResult : NSObject
{
    NSString *_catId;
    NSDictionary *_meta;
    NSArray *_speak;
    NSArray *_print;
    NSArray *_dialogId;
    NSArray *_captionSpeak;
    NSArray *_captionPrint;
    NSArray *_printOnly;
    NSArray *_spokenOnly;
}

@property (strong, nonatomic) NSArray *captionPrint; // @synthesize captionPrint=_captionPrint;
@property (strong, nonatomic) NSArray *captionSpeak; // @synthesize captionSpeak=_captionSpeak;
@property (strong, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property (strong, nonatomic) NSArray *dialogId; // @synthesize dialogId=_dialogId;
@property (strong, nonatomic) NSDictionary *meta; // @synthesize meta=_meta;
@property (strong, nonatomic) NSArray *print; // @synthesize print=_print;
@property (strong, nonatomic) NSArray *printOnly; // @synthesize printOnly=_printOnly;
@property (strong, nonatomic) NSArray *speak; // @synthesize speak=_speak;
@property (strong, nonatomic) NSArray *spokenOnly; // @synthesize spokenOnly=_spokenOnly;

- (void).cxx_destruct;

@end

