//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/JSExport-Protocol.h>

@class NSString, WFSyntaxHighlightToken;

@protocol WFSyntaxHighlightToken <JSExport>

@property int length;
@property BOOL overflows;
@property int start;
@property (strong) NSString *string;

+ (WFSyntaxHighlightToken *)constructToken;
@end
