//
//  ESMarker.h
//  TabrisMapsExample
//
//  Created by Patryk Mol on 30/06/16.
//
//

#import <Tabris/BasicWidget.h>
#import <MapKit/MapKit.h>

@interface ESMarker : BasicWidget <MKAnnotation>
@property (strong) NSArray *position;
@property (assign) BOOL tapListener;
- (void)tapped;
@end
