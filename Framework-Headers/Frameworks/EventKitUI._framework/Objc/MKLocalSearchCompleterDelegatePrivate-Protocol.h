//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/MKLocalSearchCompleterDelegate-Protocol.h>

@class MKLocalSearchCompleter, NSArray, NSError, NSString;
@protocol GEOMapServiceCompletionTicket;

@protocol MKLocalSearchCompleterDelegatePrivate <MKLocalSearchCompleterDelegate>

@property (strong, nonatomic) id<GEOMapServiceCompletionTicket> lastTicket;


@optional
- (void)completer:(MKLocalSearchCompleter *)arg1 didFailWithError:(NSError *)arg2 forQueryFragment:(NSString *)arg3;
- (void)completer:(MKLocalSearchCompleter *)arg1 didUpdateResultsWithSections:(NSArray *)arg2 forQueryFragment:(NSString *)arg3;
- (void)completerDidAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completerDidFail:(MKLocalSearchCompleter *)arg1 error:(NSError *)arg2;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1 finished:(BOOL)arg2;
- (void)completerWillAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completerWillUpdateResults:(MKLocalSearchCompleter *)arg1;
@end

