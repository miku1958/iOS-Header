//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class MKLocalSearchCompleter, NSError;

@protocol MKLocalSearchCompleterDelegate <NSObject>

@optional
- (void)completer:(MKLocalSearchCompleter *)arg1 didFailWithError:(NSError *)arg2;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1;
@end

