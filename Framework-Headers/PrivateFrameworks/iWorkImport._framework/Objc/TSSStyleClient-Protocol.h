//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKModel-Protocol.h>

@class NSSet;

@protocol TSSStyleClient <TSKModel>
- (NSSet *)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(TSSStyle * (^)(TSSStyle *))arg1;
@end
