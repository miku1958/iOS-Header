//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface AKAuthorizationNameFormatter : NSFormatter
{
}

+ (void)_addSymbolModifiersToCharacterSet:(id)arg1;
+ (id)validNameCharacterSet;
- (id)_cleanNameString:(id)arg1;
- (BOOL)_isOnlyWhitespace:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (id)stringForObjectValue:(id)arg1;

@end

