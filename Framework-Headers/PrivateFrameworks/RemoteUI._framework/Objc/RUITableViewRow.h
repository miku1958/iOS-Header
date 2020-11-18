//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import <RemoteUI/RUIWebContainerViewDelegate-Protocol.h>
#import <RemoteUI/UIPickerViewDelegate-Protocol.h>
#import <RemoteUI/UITextFieldDelegate-Protocol.h>

@class NSData, NSDate, NSDictionary, NSMutableArray, NSString, RUIWebContainerView, RemoteUITableViewCell, UIControl, UISwitch, UIView;
@protocol RUITableViewRowDelegate, RUITextFieldChangeObserver;

@interface RUITableViewRow : RUIElement <RUIWebContainerViewDelegate, UIPickerViewDelegate, UITextFieldDelegate>
{
    RemoteUITableViewCell *_tableCell;
    NSMutableArray *_selectOptions;
    long long _selectedRow;
    NSDate *_date;
    NSDate *_dateMax;
    NSDate *_dateMin;
    UISwitch *_switchControl;
    BOOL _switchValue;
    BOOL _rowInvalid;
    NSDictionary *_deleteAction;
    NSData *_data;
    RUIWebContainerView *_webContainerView;
    float _cachedHeight;
    BOOL _configured;
    BOOL _selected;
    id<RUITableViewRowDelegate> _delegate;
    long long _datePickerMode;
    UIView *_pickerView;
    double _height;
    id<RUITextFieldChangeObserver> _textFieldChangeObserver;
    long long _alignment;
}

@property (nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property (nonatomic) BOOL configured; // @synthesize configured=_configured;
@property (readonly, nonatomic) UIControl *control;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (strong, nonatomic) NSDate *date; // @synthesize date=_date;
@property (strong, nonatomic) NSDate *dateMax; // @synthesize dateMax=_dateMax;
@property (strong, nonatomic) NSDate *dateMin; // @synthesize dateMin=_dateMin;
@property (readonly, nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RUITableViewRowDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSDictionary *deleteAction; // @synthesize deleteAction=_deleteAction;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height; // @synthesize height=_height;
@property (strong, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property (nonatomic) BOOL rowInvalid; // @synthesize rowInvalid=_rowInvalid;
@property (nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (readonly, nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<RUITextFieldChangeObserver> textFieldChangeObserver; // @synthesize textFieldChangeObserver=_textFieldChangeObserver;

+ (id)_formatterForDateYMD;
+ (id)_formatterForMonthAndDay;
+ (id)_formatterForShortDate;
+ (id)_formatterForYearAndMonth;
+ (id)_timeZoneAdjustedDateFromDate:(id)arg1;
+ (void)initialize;
+ (void)resetLocale;
- (void).cxx_destruct;
- (void)_datePickerChanged:(id)arg1;
- (id)_datePickerFormatter;
- (void)_switchFlipped:(id)arg1;
- (void)_updateContentForDisabledState;
- (void)accessoryImageLoaded;
- (void)clearCachedHeight;
- (void)dealloc;
- (void)detailLabelActivatedLinkFromCell:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)loadAccessoryImage;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (id)radioGroupSelectedColor;
- (float)rowHeightWithMax:(float)arg1 peggedHeight:(float)arg2 tableView:(id)arg3 indexPath:(id)arg4;
- (id)selectOptions;
- (void)setAttributes:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (id)sourceURL;
- (BOOL)supportsAutomaticSelection;
- (void)switchCanceled;
- (id)tableCell;
- (Class)tableCellClass;
- (long long)tableCellStyle;
- (id)textColorForAttributeName:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;

@end

