<?php
/**
 * The base configuration for WordPress
 *
 * The wp-config.php creation script uses this file during the installation.
 * You don't have to use the website, you can copy this file to "wp-config.php"
 * and fill in the values.
 *
 * This file contains the following configurations:
 *
 * * Database settings
 * * Secret keys
 * * Database table prefix
 * * ABSPATH
 *
 * @link https://developer.wordpress.org/advanced-administration/wordpress/wp-config/
 *
 * @package WordPress
 */

// ** Database settings - You can get this info from your web host ** //
/** The name of the database for WordPress */
define( 'DB_NAME', 'lixofacil' );

/** Database username */
define( 'DB_USER', 'root' );

/** Database password */
define( 'DB_PASSWORD', '' );

/** Database hostname */
define( 'DB_HOST', 'localhost' );

/** Database charset to use in creating database tables. */
define( 'DB_CHARSET', 'utf8mb4' );

/** The database collate type. Don't change this if in doubt. */
define( 'DB_COLLATE', '' );

/**#@+
 * Authentication unique keys and salts.
 *
 * Change these to different unique phrases! You can generate these using
 * the {@link https://api.wordpress.org/secret-key/1.1/salt/ WordPress.org secret-key service}.
 *
 * You can change these at any point in time to invalidate all existing cookies.
 * This will force all users to have to log in again.
 *
 * @since 2.6.0
 */
define( 'AUTH_KEY',         'V073nS_~DNQ1%aUKH_e[_N[wkuQ[r9ZDx%5EqzW<PSd{gFX!29X{.P/.OQUQlr|K' );
define( 'SECURE_AUTH_KEY',  'Al7RS5Uokg2{^6Vw-3SV9wm:_v.i`wf&l.p1zI9Gkcz9kJRFiv@72+F599Iji^F?' );
define( 'LOGGED_IN_KEY',    '5hV4XD?k3z^1:ZIOIHCwE1zbePUcm:u.q[=83lZ]W*UD^G Pv>ouC.a91>w)!wPu' );
define( 'NONCE_KEY',        'yw5gl^bdCSxf`VWRruntcjKr:B oL0&@K^kh;;1IaOXli8-Y[oJbA-K4:):A5}Up' );
define( 'AUTH_SALT',        'Cz6yR8_HX^afCw1I^08NtE,~r`&{sD]KIQ-P9Z.gJ2~Bd^Sl~u@V~.;fZO##>dk.' );
define( 'SECURE_AUTH_SALT', 'Jk}]cL%,{]epqsYX:w4dJ`oAP),w,t<tv.Rh^5NJ>gO9Z{=>M4<mLla9*Y.TTv[z' );
define( 'LOGGED_IN_SALT',   ']`*HCVRw>QR`;fI8+5x5rbaCpZouaAny_$sP8O,@#JyEDX]N }b!m19F1JrKz[3x' );
define( 'NONCE_SALT',       'JyaPGQlibh-xt8^hmRfrX.n|J <HH.]G>!3V-[Y?_4YkB=Uz/?nyT9Amqo&XV8uj' );

/**#@-*/

/**
 * WordPress database table prefix.
 *
 * You can have multiple installations in one database if you give each
 * a unique prefix. Only numbers, letters, and underscores please!
 */
$table_prefix = 'wp_';

/**
 * For developers: WordPress debugging mode.
 *
 * Change this to true to enable the display of notices during development.
 * It is strongly recommended that plugin and theme developers use WP_DEBUG
 * in their development environments.
 *
 * For information on other constants that can be used for debugging,
 * visit the documentation.
 *
 * @link https://developer.wordpress.org/advanced-administration/debug/debug-wordpress/
 */
define( 'WP_DEBUG', false );

/* Add any custom values between this line and the "stop editing" line. */



/* That's all, stop editing! Happy publishing. */

/** Absolute path to the WordPress directory. */
if ( ! defined( 'ABSPATH' ) ) {
	define( 'ABSPATH', __DIR__ . '/' );
}

/** Sets up WordPress vars and included files. */
require_once ABSPATH . 'wp-settings.php';
