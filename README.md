<style>
    :root {
        --green-commit-color: #2dba4e;
        --github-bg-color: #2b3137;
        --white: #ffffff;
    }

    .container {
        display: flex;
        justify-content: center;
        align-content: center;
        gap: 1rem;
        width: 100dvw;
        background-color: var(--github-bg-color);
    }

    .center-items {
        display: flex;
        justify-content: center;
        align-content: center;
        height: 100%;
    }
    
    .wolf-icon {
        background-color: var(--github-bg-color);
        fill: var(--green-commit-color);
    }

    mark{
        color:red;
    }

    /* Font style */
    .doto-font {
        font-family: "Doto", sans-serif;
        font-optical-sizing: auto;
        font-weight: 700;
        font-style: normal;
        font-variation-settings: "ROND" 0;
        color: var(--green-commit-color);
    }
</style>

<link rel="preconnect" href="https://fonts.googleapis.com">
<link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Doto:wght@100..900&display=swap" rel="stylesheet">

<!-- Banner -->
<div class="container">
<div>
<?xml version="1.0" encoding="UTF-8"?><svg id="a" xmlns="http://www.w3.org/1500/svg" class="wolf-icon" width="120px" height="120px" viewBox="0 0 800 600.7"><path d="M402.32,554.9c-6.46-5-13.05-9.85-19.36-15.04-19.53-16.04-37.82-33.36-54.02-52.83-20.95-25.18-33.83-53.86-37.83-86.43-2.49-20.27-1.46-40.34,4.07-61.11-6.45,9.81-10.73,19.51-13.61,29.8-8.03,28.67-4.93,56.47,6.36,83.74,11.44,27.64,27.73,52.16,47.27,74.62,4.8,5.51,9.97,10.7,14.78,16.39-1.72-1.21-3.5-2.34-5.14-3.64-20.29-16-39.49-33.17-56.42-52.75-16.62-19.23-29.67-40.58-34.77-65.74-10.43-51.45,.53-97.93,34.14-138.63,10.03-12.15,22.08-22.07,36.19-30.73-11.43-2.01-22.16-1.39-32.86,.19-10.85,1.6-21.07,5.16-30.8,10.81,3.44-7.7,10.65-17.05,23.64-28.38,9.2-8.03,19.31-15.03,28.24-21.89-6.84,.33-35.73,18-47.51,29.53-14.12,13.82-22.99,30.41-27.31,50.4,12.14-12.17,26.37-19.31,41.63-24.97-4.65,5.15-9.48,9.92-13.64,15.22-13.59,17.34-22.26,36.95-25.03,58.83-6.25,49.36,3.74,95.88,25.35,140.26,.54,1.1,1.06,2.22,1.58,3.33,.03,.07-.06,.2-.1,.3-6.39-6.2-24.9-37.67-32.41-57.28-7.97-20.81-13.23-42.13-13.45-64.7-4.22,5.14-9.06,19.92-10.91,32.99-6.55-21.8-10.72-78.6,12.28-116.13-5.62,2.57-17.1,14.85-23.5,25.69-5.92,10.01-10.99,20.52-16.53,30.72,15.3-53.99,39.13-102.54,87-135.95-22,6.21-42.39,15.82-61.31,29.65,6.23-6.45,11.74-12.82,17.93-18.43,28.2-25.55,61.47-41.39,98.1-50.71,1.99-.51,4.13-1.84,5.44-3.42,15.52-18.57,30.81-37.32,46.33-55.9,12.48-14.94,25.18-29.71,38.24-44.46-.79,27.02-2.45,53.99,2.95,81.85,26.87-26.98,53.05-53.27,79.54-79.87-1.17,11.79-2.34,23.16-3.43,34.54-1.98,20.63-4.1,41.31-2.2,62.02,1.44,15.65,4.06,31.2,6.19,46.79,1,7.35,1.99,14.7,3.19,22.02,.23,1.39,1.05,3.05,2.14,3.88,18.91,14.43,29.52,34.29,35.89,56.5,1.58,5.52-.17,12.05-.6,18.09-.47,6.73-1.23,13.45-1.73,20.18-.08,1.13,.18,2.54,.83,3.42,18.08,24.56,36.11,49.16,56.42,71.98,6.3,7.08,13.34,13.04,22.19,16.66,.61,.25,1.15,.65,2.32,1.33-2.59,3.16-4.86,6.34-7.54,9.11-9.05,9.36-20.17,15.73-31.74,21.35-6.86,3.33-13.98,6.13-20.83,9.47-4.02,1.95-7.87,1.86-12.06,.87-12.81-3.02-23.81-9.75-34.88-16.43-7.88-4.76-15.91-9.26-23.91-13.81-1.61-.92-3.41-1.51-5.69-2.49,2.99,3.03,5.51,5.59,8.53,8.65-13.08-2.06-25-1.03-36.14,4.88-14.8,7.85-22.24,20.62-23.49,36.96-1.15,15.03,1.16,29.59,7.84,43.28,.08,.16-.04,.42-.14,1.09-11.12-12.46-20.26-25.79-26.31-41.08-6.1-15.42-8.14-31.45-6.46-48.16-5.25,7.41-10.36,33.8-9.34,47.71,1.2,16.39,4.97,32.06,12.96,46.6-36.88-41.82-65.94-87.43-71.02-144.95-.74,4.07-1.59,8.12-2.17,12.21-.6,4.23-1.07,8.49-1.36,12.75-1.56,22.46,2.69,43.85,11.99,64.3,12.86,28.29,30.2,53.64,50.28,77.22,2.04,2.4,4.15,4.73,6.23,7.1l-.5,.65Zm-9.82-222.95c-15.7,10.15-26.32,23.79-30.87,42.4,3.98-2.64,7.37-5.24,11.08-7.24,3.64-1.96,7.53-3.51,11.45-4.86,4.02-1.39,8.16-2.49,12.31-3.41,4.01-.89,8.1-1.4,12.16-2.08-24.19,16.16-29.86,38.57-27.84,55.21,3.75-8.57,10.38-13.87,18.69-17.26,8.19-3.35,16.79-4.92,25.58-5.48,16.24-1.04,31.65,2.58,45.95,9.86,21.8,11.1,43.2,22.99,64.76,34.56,3.9,2.09,7.74,4.29,11.61,6.44l.42-.71c-3.15-2.02-6.27-4.09-9.45-6.04-23.45-14.41-46.77-29.02-70.41-43.1-14.8-8.82-30.81-14.27-48.38-13.13-5.69,.37-11.33,1.65-17.15,2.54,12.17-12.55,26.79-20.53,44.62-24.57-17.76-6.8-35.13-9.74-53.51-8.25,6.47-5.3,12.94-10.5,19.97-14.78,7.1-4.32,14.75-7.72,22.24-11.56-22.93-6.58-45.83-8.16-69.32,.66,.82-1.02,1.17-1.53,1.6-1.97,8.7-8.9,18.36-16.61,29.08-22.93,10.76-6.35,22.22-10.96,34.8-11.72,21.37-1.28,39.58,6.57,55.53,20.26,7.36,6.32,13.24,13.85,17.33,23.82,1.93-8.37,3.04-15.96,5.49-23.08,2.94-8.54,1-15.81-3.45-22.96-.18-.29-.32-.59-.49-.89-11.34-19.63-28.08-33.41-47.76-43.96-3.56-1.91-7.25-3.59-10.89-5.37,13.27,12.44,26.03,25,34.13,42.63-28.16-18.42-57.51-24.26-89.25-14.27,2.31,.74,4.7,1.03,7.06,1.45,2.32,.41,4.63,.87,6.91,1.46,2.25,.58,4.45,1.36,6.67,2.05-17.77,5.13-33.32,14.34-49.28,22.76-13.48,7.12-27.35,13.49-41.1,20.08-2.66,1.28-5.58,2.01-8.39,3l.22,1.15c7.86-.93,15.86-1.26,23.56-2.96,7.63-1.68,14.96-4.74,22.64-7.27-13.59,13.75-25.59,28.35-29.6,48.16,18.74-12.64,39.41-17.45,61.27-18.66Zm87.51-137.94c-9.69-8.44-13.91-18.5-14.79-30.15-.9-11.83,1.61-23.24,4.64-34.53,1.99-7.41,4.43-14.71,6.66-22.04-.15,.04-.4,.04-.54,.16-16.66,14.36-30.41,31.15-41.6,50.04-.53,.89-.4,2.62,.11,3.61,4.93,9.54,11.71,17.55,20.51,23.74,7.24,5.1,15.15,8.6,25.03,9.16Zm-112.84,49.26c.06-.75,.18-1.1,.11-1.4-5.9-23-4.74-45.89,1.22-68.66,6.49-24.81,19.09-46.63,33.38-67.61,.46-.67,.84-1.39,1.25-2.09-.67,.06-1.03,.31-1.33,.62-11.48,12.12-21.99,25-30.54,39.38-13.31,22.4-19.5,46.28-14.69,72.33,1.78,9.65,5.33,18.67,10.6,27.41Zm77.04,58.22l-.26,.38c8.02,10.42,16.01,20.87,24.12,31.21,.61,.78,2.1,1.19,3.19,1.22,5.74,.13,11.49,.24,17.23,.03,2.61-.09,4.04,.87,5.39,2.99,3.06,4.82,6.4,9.46,9.63,14.17-.47-4.61-1.27-9.01-2.3-13.36-.25-1.07-1.03-2.32-1.94-2.88-18.32-11.31-36.69-22.53-55.06-33.76Zm-23.96-99.65c-2.03-2.44-4.08-4.62-5.81-7.03-6.59-9.18-8.14-20.07-9.8-30.79-1.91-12.41-3.15-24.92-4.66-37.19-.03,.14-.2,.53-.2,.92-.44,20.24-.87,40.47-1.26,60.71-.02,.83,.24,1.87,.75,2.47,5.46,6.41,12.24,10.36,20.97,10.9Z"/></svg>
</div>

<div height="120px">
<div class="center-items">
<p class="header doto-font" style="font-size: 4rem;">Phantom Link</p>
</div>
</div>
</div>  