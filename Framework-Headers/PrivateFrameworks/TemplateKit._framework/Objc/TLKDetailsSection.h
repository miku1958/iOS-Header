//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class NSArray, TLKMultilineText;

@interface TLKDetailsSection : TLKObject
{
    TLKMultilineText *_title;
    NSArray *_details;
}

@property (strong) NSArray *details; // @synthesize details=_details;
@property (strong) TLKMultilineText *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)observableProperties;

@end

