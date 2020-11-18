//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/MKSearchCompleterDelegate-Protocol.h>

@class CLGeocoder, MKLocalSearchCompleter, NSString;
@protocol GEOMapServiceCompletionTicket, WeatherValidatorDelegate;

@interface TWCValidator : NSObject <MKSearchCompleterDelegate>
{
    MKLocalSearchCompleter *_completer;
    CLGeocoder *_geocoder;
    id<WeatherValidatorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WeatherValidatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<GEOMapServiceCompletionTicket> lastTicket;
@property (readonly) Class superclass;

+ (id)sharedValidator;
- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)autocompleteLocationName:(id)arg1;
- (void)cancel;
- (void)completerDidFail:(id)arg1 error:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1 finished:(BOOL)arg2;
- (void)geocodeLocation:(id)arg1;
- (id)init;

@end

